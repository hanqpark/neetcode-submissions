class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for (const string& str: strs) {
            string s = str;
            sort(s.begin(), s.end());
            m[s].push_back(str);
        }

        vector<vector<string>> answer;
        for (const auto& [key, value]: m) {
            answer.push_back(value);
        }

        return answer;
    }
};
