class Solution {
public:

    string encode(vector<string>& strs) {
        string answer;
        for (const auto& str: strs) {
            answer += str.size();
            answer += str;
        }

        return answer;
    }

    vector<string> decode(string s) {
        int size = 0;
        vector<string> v;

        while (size < s.size()) {
            string a = s.substr(size+1, s[size]);
            v.emplace_back(a);
            size += s[size]+1;
        }

        return v;
    }
};
