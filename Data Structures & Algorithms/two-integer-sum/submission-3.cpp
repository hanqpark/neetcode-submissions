class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nmap;

        for (int i = 0; i < nums.size(); ++i)
            nmap[nums[i]] = i;
        
        for (const auto& n: nums) {
            if (nmap[target-n])
                return {nmap[n], nmap[target-n]};
        }

        return {};
    }
};
