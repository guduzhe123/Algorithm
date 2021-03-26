//
// Created by zhouhua on 2020/5/3.
//

#include "../inc/priority_queue.hpp"

int PriorityQueue::minimumTotal(vector<vector<int>> &triangle) {
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


void PriorityQueue::myFunction() {
    priority_queue<int>que;
    priority_queue<int, vector<int>, cmp1> que1;
    priority_queue<int, vector<int>, cmp2> que2;
//    num1 =

    for (int i = 0; a[i]; i ++) {
        que.push(a[i]);
        que1.push(a[i]);
        que2.push(a[i]);
    }


    cout <<"que num: ";
    while (!que.empty()) {
        cout << que.top() << ", ";
        que.pop();
    }
    cout << endl;
    cout <<"que1 num: ";
    while (!que1.empty()) {
        cout  << que1.top() << ", ";
        que1.pop();
    }
    cout << endl;
    cout << "que2 num: ";
    while (!que2.empty()) {
        cout << que2.top() << ", ";
        que2.pop();
    }
    cout << endl;
}
