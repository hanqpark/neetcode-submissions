class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        
        for (const string& str : strs) {
            string key = getAnagramKey(str);
            m[key].push_back(str);
        }

        vector<vector<string>> answer;
        answer.reserve(m.size());

        for (auto& [_, value] : m) {
            answer.push_back(std::move(value));
        }

        return answer;
    }
    
private:
    string getAnagramKey(const string& s) {
        array<int, 26> count = {0};
        for (char c : s) {
            count[c - 'a']++;
        }
        
        string key;
        key.reserve(52);
        for (int i = 0; i < 26; ++i) {
            if (count[i] > 0) {
                key += 'a' + i;
                key += to_string(count[i]);
            }
        }
        return key;
    }
};
