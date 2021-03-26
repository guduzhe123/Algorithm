//
// Created by zhouhua on 2020/3/8.
//

#include "../inc/DynamicPlan.hpp"

void DynamicPlan::maxProduct(vector<int>& nums) {
    int result = nums[0];
    int imax = 1, imin = 1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < 0) swap(imax, imin);

        imax = max(imax * nums[i], nums[i]);
        imin = min(imin * nums[i], nums[i]);
        result = max(result, imax);
    }
    cout <<"DP result = " << result <<endl;
}

void DynamicPlan::run_DP() {
/*    vector<int> a = {2, 4, -2, 3};
    maxProduct(a);*/

    vector<int> a = {1,2,5};
    int count = 11;
    coinCalcultae(a, count);
}




int DynamicPlan::coinChange(vector<int>& coins, int rem) {
        if (rem < 0) return -1;
        if (rem == 0) return 0;
        if (count_[rem - 1] != 0) return count_[rem - 1];
        int Min = INT_MAX;
        for (int coin:coins) {
            int res = coinChange(coins, rem - coin);
            if (res >= 0 && res < Min) {
                Min = res + 1;
            }
        }
        count_[rem - 1] = Min == INT_MAX ? -1 : Min;
        return count_[rem - 1];
    }

int DynamicPlan::coinCalcultae(vector<int> &coins, int amount) {
    if (amount < 1) return 0;
    count_.resize(amount);
    return coinChange(coins, amount);
}
