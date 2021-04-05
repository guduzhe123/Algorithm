//
// Created by zhouhua on 2021/3/30.
//
#include "../../../inc/BackStep/partition.hpp"

void Partition::backStep(string s, int startIndex) {
    if (startIndex >= s.size()) {
        result_.push_back(path_);
        return;
    }

    for (int i = startIndex; i < s.size(); i++) {
        string subS = s.substr(startIndex, i - startIndex + 1);
        if (isPartition(subS, 0, subS.size() - 1)) {
            path_.push_back(subS);
        } else {
            continue;
        }
        backStep(s, i+1);
        path_.pop_back();
    }
}

bool Partition::isPartition(string s, int start, int end) {
    for (int i = start, j = end; i <= j; i++, j--) {
        if (s[i] != s[j]) return false;
    }
    return true;
}

int main() {
    Partition m_fun;
    string s = "aab";
    m_fun.backStep(s, 0);
    cout << m_fun.result_.size() << endl;
}