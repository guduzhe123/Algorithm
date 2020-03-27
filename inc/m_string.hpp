//
// Created by zhouhua on 2020/3/8.
//

#ifndef UNTITLED_M_STRING_HPP
#define UNTITLED_M_STRING_HPP

#include <iostream>
#include "vector"
#include "stdio.h"
using namespace std;
class m_string {
public:
    m_string() = default;
    ~m_string() = default;
/*14. 最长公共前缀
 * 编写一个函数来查找字符串数组中的最长公共前缀。
如果不存在公共前缀，返回空字符串 ""。
 https://leetcode-cn.com/problems/longest-common-prefix/*/
    void longestCommonPrefix(vector<string>& strs);
    void run_mString();

    void getStr();
    void compair(string str);
    void getHexStr();
    void m_ascii();

    /*将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符
https://www.nowcoder.com/practice/48b3cb4e3c694d9da5526e6255bb73c3?tpId=37&tqId=21236&rp=0&ru=/ta/huawei&qru=/ta/huawei/question-ranking*/
    void reviseString();

/*题目描述
给定n个字符串，请对n个字符串按照字典序排列。
 https://www.nowcoder.com/practice/5af18ba2eb45443aa91a11e848aa6723?tpId=37&tqId=21237&rp=0&ru=/ta/huawei&qru=/ta/huawei/question-ranking*/
    int map_cout();
    void cout_map (string last, int j);

    /*https://www.nowcoder.com/practice/03ba8aeeef73400ca7a37a5f3370fe68?tpId=37&tqId=21250&tPage=2&rp=&ru=%2Fta%2Fhuawei&qru=%2Fta%2Fhuawei%2Fquestion-ranking*/
    void m_map();


};
#endif //UNTITLED_M_STRING_HPP
