class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dup;

        for (const auto& i: nums) {
            if(!dup.insert(i).second)
                return true;
        }

        return false;
    }
};