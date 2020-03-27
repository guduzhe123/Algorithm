//
// Created by zhouhua on 2020/3/7.
//

#ifndef UNTITLED_MSTACK_HPP
#define UNTITLED_MSTACK_HPP

#include <iostream>
#include <stack>
using namespace std;

class MStack {
public:
    MStack() = default;
    ~MStack() = default;

//leetCode #20
/*给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
    bool isValid(string s);

};
#endif //UNTITLED_MSTACK_HPP
