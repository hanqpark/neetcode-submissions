class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us(nums.begin(), nums.end()); // O(n)

        int answer = 0;
        for (int num: us) {   // O(m)
            if (us.find(num-1) != us.end()) continue; // O(1)

            int seq = 1;
            while (us.find(num+seq) != us.end()) { // O(m) * O(1)
                ++seq;
            }

            answer = answer > seq ? answer : seq;
        }

        return answer; // 최악의 경우 O(n)?
    }
};
