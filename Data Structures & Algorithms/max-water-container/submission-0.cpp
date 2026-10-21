class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = static_cast<int>(heights.size())-1;

        int answer = min(heights[r], heights[l]) * (r - l);

        while (l < r) {
            int first = min(heights[l+1], heights[r]) * (r - (l+1));
            int second = min(heights[l], heights[r-1]) * ((r-1) - l);
            
            if (first >= second) {
                answer = max(first, answer);
                ++l;
            } else {
                answer = max(second, answer);
                --r;
            }
        }

        return answer;
    }
};
