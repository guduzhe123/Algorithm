//
// Created by zhouhua on 2020/3/19.
//

#include "../inc/stock.hpp"

void stock::run_stock() {
    vector<int> prices = {7,1,5,3,6,4};
    maxProfit(prices);
}

int stock::maxProfit(vector<int> &prices) {
    if (prices.size() == 0) return -1;
    int n = prices.size();
    int dp[n]; // sell 0
    int dp2[n]; // buy 1
    dp[0] = 0;
    dp2[0] = -prices[0];
    for (int (i) = 1; (i) < n; (i)++) {
        dp[i] = max(dp[i-1], dp2[i-1] + prices[i]);
        dp2[i] = max(dp2[i-1], -prices[i]);
    }
    cout << dp[n-1];
//    return dp[n-1];
}

