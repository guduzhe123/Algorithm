#include <iostream>
#include <stdio.h>
#include "inc/LIST.hpp"
#include "inc/Sort.hpp"
#include "inc/MStack.hpp"
#include "inc/DynamicPlan.hpp"
#include "inc/haspMap.hpp"
#include "inc/m_string.hpp"
#include "inc/Find_algorithm.hpp"
#include "inc/stock.hpp"
#include "inc/map_search.hpp"
using namespace std;

// number of the total: n . Move form 'x' -> 'z' by using 'y'
void move(int n, char x, char y, char z) {
    if (n == 1) {
        printf("%c-->%c\n", x, z);
    } else {
        move(n-1, x, z, y); // move n-1 form x->y by using z
        printf("%c--->%c\n", x,z); // move n frome x -> z
        move(n-1, y, x, z); // move n-1 form y->z by using x;
    }
}
int hanluota() {
    std::cout << "enter n: " << std::endl;
    int n = 3;
    move(n,'X', 'Y', 'Z');
}



int main() {
/*    Sort m_sort;
    m_sort.sort_run();*/

/*    LIST m_list;
    m_list.listRun();*/

/*    string s = "()";
    MStack m_stack;
    bool value = m_stack.isValid(s);
    cout << "isValid = " << value <<endl;*/

/*    DynamicPlan m_dp;
    m_dp.run_DP();*/

/*    HashMap m_hm;
    m_hm.run_hashmap();*/

/*    m_string m_str;
    m_str.run_mString();*/

/*    Find_algorithm m_find;
    m_find.run_search();*/
/*
    stock m_stock;
    m_stock.run_stock();*/

    MapSearch m_map;
    m_map.run_map();

    return 0;
 }
