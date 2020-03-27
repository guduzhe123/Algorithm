//
// Created by zhouhua on 2020/3/8.
//

#ifndef UNTITLED_DYNAMICPLAN_HPP
#define UNTITLED_DYNAMICPLAN_HPP

#include "iostream"
#include "vector"
#include <math.h>
using namespace std;

class DynamicPlan {
public:
    DynamicPlan() = default;
    ~DynamicPlan() = default;
/*    152. 乘积最大子序列
 * 给定一个整数数组 nums ，找出一个序列中乘积最大的连续子序列（该序列至少包含一个数）。
 * https://leetcode-cn.com/problems/maximum-product-subarray/
    */
    void maxProduct(vector<int>& nums);

//   322. 零钱兑换
/*给定不同面额的硬币 coins 和一个总金额 amount。编写一个函数来计算可以凑成总金额所需的最少的硬币个数。如果没有任何一种硬币组合能组成总金额，返回 -1。
 * https://leetcode-cn.com/problems/maximum-product-subarray/

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/coin-change
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
    int coinChange(vector<int>& coins, int amount);
    int coinCalcultae(vector<int>& coins, int rem);
    vector<int> count_;
    long INT_MAX = 9999999;

    void run_DP();
};


#endif //UNTITLED_DYNAMICPLAN_HPP
