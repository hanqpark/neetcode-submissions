class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        for (const int& num: nums) {
            um[num]++;
        }

        priority_queue<pair<int, int>> pq;
        for (const auto& p: um) {
            pq.push({p.second, p.first});
        }

        vector<int> answer;
        while (answer.size() < k) {
            const auto& p = pq.top();
            answer.emplace_back(p.second);
            pq.pop();
        }

        return answer;
    } 
};
