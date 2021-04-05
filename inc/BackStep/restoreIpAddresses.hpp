//
// Created by zhouhua on 2021/3/31.
//

#ifndef ALGORITHM_RESTOREIPADDRESSES_HPP
#define ALGORITHM_RESTOREIPADDRESSES_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class restro {
public:
    void backStep(string s, int index, int pointNum);

    void restoreAddress(string s);

    bool isValid(string s, int start, int end);
    vector<string> result;

private:
    string path;
};
#endif //ALGORITHM_RESTOREIPADDRESSES_HPP
