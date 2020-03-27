//
// Created by zhouhua on 2020/3/7.
//

#include "../inc/Sort.hpp"

void  Sort::insert_sort(int a[]) {
    for (int i = 1; i < 6; i++) {
        int temp = a[i];
        int j;
        for ( j = i; j > 0 && temp < a[j-1]; j--) {
            a[j] = a[j-1];
        }
        a[j] = temp;
    }
    for (int i = 0 ; i < 6; i++) {
        cout << a[i] ;
    }
}

void Sort::choose_sort(int a[]) {
    for (int i = 0; i < 5; i++) {
        for (int j = i +1; j < 6; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0 ; i < 6; i++) {
        cout << a[i];
    }
}

void Sort::bubble_sort(int a[]) {
    bool hasChange = true;
    for (int i = 0; i < 5 && hasChange; i++) {
        hasChange = false;
        for (int j = 0; j < 6 - i -1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                hasChange = true;
            }
        }
    }
}

void Sort::merge(int a[], int left, int right) {
    int i = left;
    int mid = (left + right) / 2;
    int j = mid + 1;
    int temp[6], k=0;
    while (i <= mid && j <= right) {
        if (a[i] > a[j]) {
            temp[k++] = a[j++];
        } else {
            temp[k++] = a[i++];
        }
    }
    while (i <= mid) {
        temp[k++] = a[i++];
    }

    while (j <= right) {
        temp[k++] = a[j++];
    }
    k = 0;
    while (left <= right) {
        a[left++] = temp[k++];
    }
}

void Sort::mergeSort(int a[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        cout << "111"<< endl;
        mergeSort(a, left, mid);
        cout << "222"<< endl;
        mergeSort(a, mid+1, right);
        cout << "333"<< endl;
        merge(a, left, right);
    }
}

void Sort::merge_sort(int a[], int n) {
    int left = 0, right = n-1;
    mergeSort(a, left, right);
}

void Sort::sort_run() {
    int a[6] = {5,2,4,1,9,6};
    int n = 6;
    for (int i = 0 ; i < n; i++) {
        cout << a[i];
    }
    cout << ' ' <<endl;
    insert_sort(a);
//   choose_sort(a);
//   bubble_sort(a);
//   merge_sort(a, 6);
}
