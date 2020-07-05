//
// Created by zhouhua on 2020/3/8.
//

#include "../inc/m_string.hpp"
#include "math.h"

void m_string::longestCommonPrefix(vector<string> &strs) {
    if (strs.size() == 0) {
        cout << "result = " << "" << endl;
        return ;
    }
    if (strs.size() == 1) {
        cout << "result = " << strs[0] << endl;
        return;
    }

    int count = 0, imin = 0;
    if (strs[0].size() == 0) return;
    int i, j;
    string a = strs[0];
    for (i = 1; i < strs.size(); i++) {
        if (strs[i].size() == 0) {
            return;
        }
        bool is_break = false;
        count = 0;
        cout << " strs[i] = " << strs[i] << endl;
        for (j = 0; j < min(a.size(), strs[i].size()) && !is_break; j++) {
            if (strs[0][j] == strs[i][j]) {
                count++;
            } else {
                is_break = true;
            }
        }
        if (i == 1) {
            imin = count;
        } else {
            imin = count > imin ? imin : count;
             cout << "min 2= " << imin << endl;
             cout << "count= " << count << endl;
        }
        a = strs[0].substr(0, imin);
    }
    cout << strs[0].substr(0, imin) << endl;
}

void m_string:: run_mString() {
/*    vector<string> s = {"flower","flow","flight"};
    longestCommonPrefix(s);*/
//    getStr();
//    m_ascii();
//    map_cout();
//    m_map ();

    string s = "babadcababa";
    cout << s<< endl;
    longestPalindrome(s);
}

void m_string::getStr() {
    string str1, str2;
    cin >> str1 >> str2;
    compair(str1);
    compair(str2);
}

void m_string::compair(string str) {
    if (str.size() == 0) {
        return;
    }

    if (str.size() < 8) {
        str.append(8 - str.size(), '0');
        cout << str << endl;
        return;
    }
    cout << str.substr(0, 8) << endl;
    compair(str.substr(8, str.size()));
}

void m_string::getHexStr() {
    int a;
    while(cin >> hex >> a) {
        cout << a << endl;
    }
}

void m_string::m_ascii() {
    int a, b, i = 0;
    cin >> a;
    string s;
    while (a > 0) {
        b = a % 10;
        string m = to_string(b);
        cout << m[0] <<endl;
        s[i] = m[0];
        i++;
        a /= 10;
    }
    cout << s << endl;
}

void m_string::reviseString() {
    /*输入
I am a boy
输出
boy a am I*/
    string s;
    if (cin >> s) {
        reviseString();
        cout << s << " ";
    }
    int a = 1;
    a = a* pow(3,3);

}

void m_string::cout_map (string last, int j) {
    string s[9] = {"cap", "to", "cat", "card", "two", "too", "up", "boat", "boot"};
    string min = last;
    string cur;
    if (j < 9) {
        cur = s[j];
        int i = 0;
        bool checked = false;
        while (i < cur.size() && i < min.size() && !checked) {
            i++;
            if (cur[i] < min[i]) {
                min = cur;
                checked = true;;
            }
        }
        j++;
        cout_map(min, j);
        cout << min << endl;
    }
}

int m_string::map_cout () {
    int a = 9;
    string s[9] = {"cap", "to", "cat", "card", "two", "too", "up", "boat", "boot"};
//    cin >> a;
//    cin >> s;
    cout_map(s[0],1);
}

void m_string::m_map () {
    int n;
    cin >> n;
    vector<string> v;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        v.push_back(s);
    }
    string tar;
    cin >> tar;
    int out;
    cin >>out;

    int a[26] = {0}, b[26];
    vector<string> brother;
    for (int j = 0; j < tar.size(); j++) {
        a[tar[j] - 'a'] += 1;
    }
    for (int i = 0; i < 26; i++) b[i] = a[i];
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int i = 0; i < 26; i++) a[i] = b[i];
        bool all_zero = true;;
        if (v[i] == tar) continue;
        if (v[i].size() == tar.size()) {
            for (int j = 0; j < tar.size(); j++) {
                a[v[i][j] - 'a'] -= 1;
                if (a[v[i][j] - 'a'] < 0) break;
            }

            for (int i = 0; i < 26; i++) {
                if (a[i] != 0) all_zero = false;
            }
            if (all_zero) {
                count++;
                brother.push_back(v[i]);
            }
        }
    }
    cout << count << endl;
    cout << brother[out - 1] << endl;
}

string m_string::longestPalindrome(string s) {
    if ( s.size() < 1) return "";
    int start = 0, end = 0;
    for (int i = 0; i < s.size(); i++) {
        int len1 = expandAroundCenter(s, i, i);
        int len2 = expandAroundCenter(s, i, i+1);
        int len = max(len1, len2);
        if (len > end - start) {
            start = i - (len - 1) /2;
            end = i + len/2;
        }
    }
    cout << s.substr(start, end);
    return s.substr(start, end+1);
}

int m_string::expandAroundCenter(string s, int left, int right) {
    int L = left, R = right;
    while (L >= 0 && R < s.size() && s[L] == s[R]) {
        L--;
        R++;
    }
    return R-L-1;
}




