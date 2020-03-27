//
// Created by zhouhua on 2020/3/7.
//

#include "../inc/MStack.hpp"

bool MStack::isValid(string s) {
    if (s.size() == 1) return false;
    stack<char> a;
    for (int i = 0; i < s.length(); i++) {
        cout << "i = " << i <<endl;
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            a.push(s[i]);
        }
        if ((s[i] == ')' || s[i] == ']' || s[i] == '}') && a.size() == 0) {
            return false;
        }
        if (a.size() > 0) {
            if (s[i] == ')' && a.top() != '(') {
                return false;
            } else if (s[i] == ')' && a.top() == '(') {
                a.pop();
            }
            if (s[i] == ']' && a.top() != '[') {
                return false;
            } else if (s[i] == ']' && a.top() == '[') {
                a.pop();
            }
            if (s[i] == '}' && a.top() != '{') {
                return false;
            } else if (s[i] == '}' && a.top() == '{') {
                a.pop();
            }
        }
    }
    cout << "is empty = " << a.empty() <<endl;
    return a.empty();

}
