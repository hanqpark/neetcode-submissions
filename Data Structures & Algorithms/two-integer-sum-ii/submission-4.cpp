class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = static_cast<int>(numbers.size())-1;

        while (true) {
            if (numbers[r] + numbers[l] > target) {
                --r;
            } else if (numbers[r] + numbers[l] < target) {
                ++l;
            } else {
                break;
            }
        }
        
        return {l+1, r+1};
    }
};
