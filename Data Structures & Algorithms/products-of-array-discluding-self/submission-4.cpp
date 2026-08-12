class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        deque<int> dq(nums.begin(), nums.end());

        for (int i = 0; i < dq.size(); ++i) {

            const int& num = dq.front();
            dq.pop_front();
            int val = std::accumulate(dq.begin(), dq.end(), 1, std::multiplies<int>());
            answer.emplace_back(val);
            dq.push_back(num);
        }

        return answer;
    }
};
