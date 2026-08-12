class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> dup;

        for (const auto& i: nums) {
            if (dup[i]) {
                return true;
            } else {
                ++dup[i];
            }
        }

        return false;
    }
};