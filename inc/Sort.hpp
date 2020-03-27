//
// Created by zhouhua on 2020/3/7.
//

#ifndef UNTITLED_SORT_HPP
#define UNTITLED_SORT_HPP
#include <stdio.h>
#include <iostream>
using namespace std;

class Sort {
public:
    void insert_sort(int a[]);
    void choose_sort(int a[]);
    void bubble_sort(int a[]);
    void merge_sort(int a[], int n);
    void sort_run();

private:
    void mergeSort(int a[], int left, int right);
    void merge(int a[], int left, int right);
};


#endif //UNTITLED_SORT_HPP
