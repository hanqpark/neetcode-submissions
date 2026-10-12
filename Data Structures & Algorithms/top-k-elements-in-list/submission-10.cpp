class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        for (int num: nums) {
            ++um[num];
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto& [num, freq]: um) {
            bucket[freq].emplace_back(num);
        }

        vector<int> answer;
        answer.reserve(k);
        for (auto it = bucket.rbegin(); it != bucket.rend(); ++it) {
            for (int num: *it) {
                answer.emplace_back(num);
            }
            
            if (answer.size() == k) break;
        }

        return answer;
    } 
};
