class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = 1;
        bool zero = false;
        for (const auto& num: nums) {
            if (num) {
                n *= num;
            } else {
                zero = true;
            }
        }

        vector<int> answer;
        answer.reserve(nums.size());
        for (const auto& num: nums) {
            if (zero) {
                answer.emplace_back(num ? 0 : n);
            } else {
                answer.emplace_back(n / num);
            }
        }

        return answer;
    }
};
