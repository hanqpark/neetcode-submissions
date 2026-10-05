#include <set>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;

        for (const auto& str: strs) {
            string key = str;
            sort(key.begin(), key.end());
            um[key].emplace_back(str);
        }

        vector<vector<string>> answer;
        for (const auto& m: um) {
            answer.emplace_back(m.second);
        }

        return answer;
    }
};
