class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() < 2) {
            return s.size();
        }

        int l = 0;
        int answer = 1;
        array<int, 128> ascii{};

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
