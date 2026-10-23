class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer = 0;
        int min = 101;
        for (int price: prices) {
            if (min > price)
                min = price;
            else
                answer = max(answer, price - min);
        }
        return answer;
    }
};
