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
        answer.reserve(um.size());
        for (auto& [key, group]: um) {
            answer.emplace_back(std::move(group));
        }

        return answer;
    }
};
