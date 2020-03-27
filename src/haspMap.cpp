//
// Created by zhouhua on 2020/3/8.
//

#include "../inc/haspMap.hpp"
#include "map"

void HashMap::romanToInt(string s) {
    cout << "s = " << s <<endl;
    map<string, int> m = {{"I", 1}, {"IV", 3}, {"IX", 8}, {"V", 5}, {"X", 10}, {"XL", 30}, {"XC", 80}, {"L", 50}, {"C", 100}, {"CD", 300}, {"CM", 800}, {"D", 500}, {"M", 1000}};
    int r = m[s.substr(0, 1)];
    for(int i=1; i<s.size(); ++i){
        string two = s.substr(i-1, 2);
        string one = s.substr(i, 1);
        r += m[two] ? m[two] : m[one];
    }
    cout << "r = " << r << endl;
}



void HashMap::run_hashmap() {
/*    string s = "VIIV";
    romanToInt(s);*/
    find_hash();
}

void HashMap::find_hash() {
    int n;
    cin >> n;
    map<int, int> imap;
    int key, num;
    while (n-- && cin >> key >> num) {
        imap[key] += num;
        cout << "key:" << key << "num: " << num << endl;
    }
    for (auto beg = imap.begin(); beg != imap.end(); ++beg) {
        cout << beg->first << " " << beg->second << endl;
    }
}
