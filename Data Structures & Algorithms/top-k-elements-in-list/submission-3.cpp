class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (const int& n: nums) {
            ++m[n];
        }

        vector<pair<int, int>> v(m.begin(), m.end());

        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) { return a.second > b.second; });

        int flag = 0;
        vector<int> sortedKeys;
        for (const auto& [key, val]: v) {
            if (flag++ == k) break;
            sortedKeys.push_back(std::move(key));
        }

        return sortedKeys;
    }
};
