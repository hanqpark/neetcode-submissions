class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = static_cast<int>(heights.size())-1;

        int answer = -1;

        while (l < r) {
            answer = max(answer, min(heights[r], heights[l]) * (r - l));
            if (heights[l] > heights[r]) --r;
            else ++l;
        }

        return answer;
    }
};
