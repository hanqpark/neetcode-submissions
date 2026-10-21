class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> answer{};

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i) {
            int l = i+1;
            int r = static_cast<int>(nums.size())-1;
            

            while (l < r) {
                if (nums[l] + nums[r] < -nums[i]) {
                    ++l;
                } else if (nums[l] + nums[r] > -nums[i]) {
                    --r;
                } else if (nums[l] + nums[r] == -nums[i]) {
                    vector<int> temp{nums[i], nums[l], nums[r]};
                    answer.insert(temp);
                    ++l; --r;
                }
            }
        }

        vector<vector<int>> real_answer;
        for (const auto& a: answer) {
            real_answer.emplace_back(a);
        }

        return real_answer;
    }
};
