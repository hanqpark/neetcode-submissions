class Solution {
public:
    int maxArea(vector<int>& heights) {
        int answer = -1;

        int l = 0;
        int r = static_cast<int>(heights.size())-1;

        while (l < r) {
            int first = min(heights[l+1], heights[r]) * (r - (l+1));
            int second = min(heights[l], heights[r-1]) * ((r-1) - l);
            int third = min(heights[r], heights[l]) * (r - l);
            answer = max(answer, max(first, max(second, third)));
            
            ++l; --r;
        }

        return answer;
    }
};
