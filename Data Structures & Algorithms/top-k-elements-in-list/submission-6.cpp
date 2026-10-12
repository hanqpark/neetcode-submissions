class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        for (const int& num: nums) {
            um[num]++;
        }

        map<int, int, std::greater<int>> m;

        for (const auto& p: um) {
            m[p.second] = p.first;
        }

        int i = 0;
        int bef = 0;
        vector<int> answer;
        for (const auto& p: m) {
            if (i++ >= k && p.first < bef) break;
            answer.emplace_back(p.second);
            bef = p.first;
        }

        return answer;
    }
};
