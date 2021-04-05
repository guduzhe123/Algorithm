//
// Created by zhouhua on 2021/3/31.
//

#include "../../../inc/BackStep/restoreIpAddresses.hpp"

void restro::backStep(string s, int index, int pointNum) {
    if (pointNum == 3) {
        if (isValid(s, index, s.size() - 1)) {
            result.push_back(s);
        }
        return;
    }
    for (int i = index; i < s.size(); i++) {
        if (isValid(s, index, i)) {
            s.insert(s.begin() + i + 1, '.');
            pointNum++;
            backStep(s, i+2, pointNum);
            pointNum--;
            s.erase(s.begin() + i + 1);
        } else {
            break;
        }
    }
}

bool restro::isValid(string s, int start, int end) {
    if (start > end) return false;
    if (s[start] == '0' && start < end) return false;
    int num = 0;
    for (int i = start; i <= end; i++) {
        char c_s = s[i];
        if (c_s > '9' || c_s < '0') return false;
        num = num * 10 + (c_s - '0');
        if (num > 255) return false;
    }
    return true;
}

void restro::restoreAddress(string s) {
    result.clear();
    backStep(s, 0, 0);

}

int main() {
    restro m_fun;
    string s = "25525511135";
    m_fun.restoreAddress(s);
    cout << m_fun.result[0].c_str() << endl;

}