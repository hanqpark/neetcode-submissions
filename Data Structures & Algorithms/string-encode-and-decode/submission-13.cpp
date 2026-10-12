class Solution {
public:

    string encode(vector<string>& strs) {
        string answer;
        for (const auto& str: strs) {
            answer += str;
            answer += '\t';
        }

        return answer;
    }

    vector<string> decode(string s) {
        stringstream ss(s);
        string token;
        vector<string> v;

        while (getline(ss, token, '\t')) {
            v.emplace_back(token);
        }

        return v;
    }
};
