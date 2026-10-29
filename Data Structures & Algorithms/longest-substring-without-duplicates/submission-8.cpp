class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int answer = 1;
        unordered_map<char, int> ascii{};

        ascii[s[0]]++;
        for (int i = 1; i < s.size(); ++i) {
            while (ascii[s[i]]) {
                ascii[s[l]] -= 1;
                ++l;
            }

            ascii[s[i]] += 1;
            answer = max(answer, i - l + 1);
        }

        return answer;
    }
};
