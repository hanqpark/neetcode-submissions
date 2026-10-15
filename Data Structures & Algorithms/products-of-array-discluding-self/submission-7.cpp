class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int left = 1;
        answer.emplace_back(left);

        for (int idx = 0; idx < nums.size()-1; ++idx) {
            left *= nums[idx];
            answer.emplace_back(left);
        }

        int right = 1;
        for (int idx = nums.size()-1; idx >= 0; --idx) {
            answer[idx] = answer[idx] * right;
            right = right * nums[idx];
        }

        return answer;
    }
};
