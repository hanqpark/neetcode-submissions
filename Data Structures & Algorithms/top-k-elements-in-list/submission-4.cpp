class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (const int& num: nums) ++freqMap[num];

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        for (const auto& [num, freq]: freqMap) {
            pq.push({freq, num});
            if (pq.size() > k) pq.pop();
        }

        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
