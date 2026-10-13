class Solution {
public:

    string encode(vector<string>& strs) {
        string answer;
        for (const auto& str: strs) {
            answer += to_string(str.size());
            answer += '#';
            answer += str;
        }

        return answer;
    }

    vector<string> decode(string s) {
        vector<string> result;
        size_t i = 0;

        while (i < s.size()) {
            size_t len = 0;

            while (s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                ++i;
            }

            ++i;

            result.emplace_back(s, i, len);

            i += len;
        }

        return result;
    }
};
