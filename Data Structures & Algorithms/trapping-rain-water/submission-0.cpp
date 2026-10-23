class Solution {
public:
    int trap(vector<int>& height) {
        int temp = 0;
        int answer = 0;
        int left = 0;
        for (int i = 0; i < height.size(); ++i) {
            int cur = height[i];
            if (left) {
                if (cur < left) {
                    temp += left - cur;
                } else {
                    answer += temp;
                    temp = 0;
                    left = cur;
                }
            } else {
                if (cur) {
                    left = cur;
                } else {
                    continue;
                }
            }
        }
        return answer;
    }
};
