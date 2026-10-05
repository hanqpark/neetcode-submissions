class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;

        for (const auto& str: strs) {
            string key = "00000000000000000000000000";
            for (const auto& ch: str) {
                key[ch-'a']++;
            }
            um[key].emplace_back(str);
        }

        vector<vector<string>> answer;
        answer.reserve(um.size());
        for (auto& [key, group]: um) {
            answer.emplace_back(std::move(group));
        }

        return answer;
    }
};
