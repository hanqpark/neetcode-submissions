class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer{};

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i-1])
                continue;

            int l = i+1;
            int r = static_cast<int>(nums.size())-1;

            while (l < r) {
                if (nums[l] + nums[r] < -nums[i]) {
                    ++l;
                } else if (nums[l] + nums[r] > -nums[i]) {
                    --r;
                } else if (nums[l] + nums[r] == -nums[i]) {
                    vector<int> temp{nums[i], nums[l], nums[r]};
                    answer.emplace_back(temp);
                    
                    do --r; while (l < r && nums[r] == nums[r+1]);
                    do ++l; while (l < r && nums[l] == nums[l-1]);
                }
            }
        }

        return answer;
    }
};
