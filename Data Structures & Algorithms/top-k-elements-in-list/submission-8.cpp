class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        for (const int& num: nums) {
            um[num]++;
        }

        vector<pair<int, int>> v(um.begin(), um.end());

        sort(v.begin(), v.end(), 
            [](const auto& a, const auto& b) {
                return a.second > b.second;
            });
        
        vector<int> answer;
        for (const auto& p: v) {
            if (answer.size() == k) break;
            answer.emplace_back(p.first);
        }

        return answer;
    }
};
