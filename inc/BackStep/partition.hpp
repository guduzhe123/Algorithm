//
// Created by zhouhua on 2021/3/30.
//

#ifndef ALGORITHM_PARTITION_HPP
#define ALGORITHM_PARTITION_HPP

#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

using namespace std;
class Partition {
public:
    void backStep(string s, int startIndex);

    bool isPartition(string s, int start, int end);
    vector<vector<string>> result_;

private:
    vector<string> path_;
};
#endif //ALGORITHM_PARTITION_HPP
