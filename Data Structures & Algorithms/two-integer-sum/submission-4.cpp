class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nmap;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            const auto& it = nmap.find(complement);

            if (it != nmap.end()) {
                return {it->second, i};
            }

            nmap[nums[i]] = i;
        }

        return {};
    }
};
