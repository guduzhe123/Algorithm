//
// Created by zhouhua on 2020/3/26.
//

#include "../inc/map_search.hpp"
#include "limits.h"

void MapSearch::run_map() {
    vector<vector<int>> grid = {{1,0,1},{0,0,0},{1,0,1}};
    maxDistance(grid);
}

int MapSearch::maxDistance(vector<vector<int>> &grid) {
    int MAX_N = 100;
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

    int n = grid.size();
    int d[MAX_N][MAX_N];
    struct Status {
        int v, x, y;
        bool operator < (const Status &rhs) const {
            return v > rhs.v;
        }
    };

    priority_queue<Status> q;
    auto &a = grid;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            d[i][j] = INT_MAX;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j]) {
                d[i][j] = 0;
                q.push({0, i, j});
            }
        }
    }

    while (!q.empty()) {
        auto f = q.top();
        q.pop();

        for (int (i) = 0; (i) < 4; ++(i)) {
            int nx = f.x + dx[i], ny = f.y + dy[i];
            if (!(nx >= 0 && nx <= n-1 && ny >= 0 && ny <= n-1)) continue;
            if (f.v + 1 < d[nx][ny]) { // find sea
                d[nx][ny] = f.v + 1;
                q.push({d[nx][ny], nx, ny});
            }
        }
    }
    int ans = -1;
    for (int (i) = 0; (i) < n; ++(i)) {
        for (int j = 0; j < n; ++j) {
            if (!a[i][j]) ans = max(ans, d[i][j]);
        }
    }
    ans =(ans == INT_MAX) ? -1 : ans;
    cout << ans << endl ;
    return ans;
}


