class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for (const auto& str: strs) {
            array<int, 26> bindo{};
            for (const auto& ch: str) {
                ++bindo[ch-'a'];
            }

            string key;
            for (const auto& b: bindo) {
                key += '#';
                key += to_string(b);
            }

            m[key].emplace_back(str);
        }

        vector<vector<string>> answer;
        answer.reserve(m.size());
        for (auto& [key, group]: m) {
            answer.emplace_back(std::move(group));
        }

        return answer;
    }
};
