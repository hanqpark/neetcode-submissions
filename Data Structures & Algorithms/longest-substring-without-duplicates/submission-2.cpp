class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int answer = 1;
        unordered_map<char, int> ascii{};

        for (int i = 1; i < s.size(); ++i) {
            if (ascii[s[i]]) {
                ascii[s[l]] += 1;
                ++l;
            }

            ascii[s[i]] += 1;
            answer = max(answer, i - l);
        }

        return answer;
    }
};
