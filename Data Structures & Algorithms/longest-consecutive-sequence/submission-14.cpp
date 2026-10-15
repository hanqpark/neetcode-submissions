class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us(nums.begin(), nums.end());

        int answer = 0;
        for (int num: nums) {
            if (us.find(num-1) != us.end()) continue;

            int seq = 1;
            while (us.find(num+seq) != us.end()) {
                seq++;
            }

            answer = answer > seq ? answer : seq;
        }

        return answer;
    }
};
