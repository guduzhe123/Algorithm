//
// Created by zhouhua on 2020/5/3.
//

#include "../inc/priority_queue.hpp"

int priority_queue::minimumTotal(vector<vector<int>> &triangle) {
    if (triangle.empty()) {
        return 0;
    }
    vector<int> dp = triangle[triangle.size() - 1];

    for (int i = triangle.size() - 2; i >=0; i--){
        for(int j = 0; j < triangle[i].size(); j++ ){
            dp[j] = std::min(dp[j] , dp[j + 1]) + triangle[i][j];
        }
    }
    return dp[0];
}

