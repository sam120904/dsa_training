#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int bestprofit = 0;

        for (int i = 0; i < prices.size(); i++) {
            int profit = prices[i] - minprice;
            bestprofit = max(bestprofit, profit);
            minprice = min(minprice, prices[i]);
        }
        return bestprofit;
    }
};

int main() {
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};

    cout << s.maxProfit(prices);
}