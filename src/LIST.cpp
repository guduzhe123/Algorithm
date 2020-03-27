//
// Created by zhouhua on 2020/3/7.
//

#include "../inc/LIST.hpp"
//LeetCode 2. 两数相加
LIST::ListNode *LIST::addTwoNumbers(LIST::ListNode *l1, LIST::ListNode *l2) {
    ListNode* cur = new ListNode(-1);
    ListNode* result = cur;
    int carry = 0;
    int sum = 0;
    while (l1 != NULL || l2 != NULL|| carry != 0) {
        int l1val = l1 !=NULL ? l1->val : 0;
        int l2Val = l2 !=NULL ? l2->val : 0;
        int a = l1val + l2Val;
        sum = carry + a;
        carry = sum / 10;
        result->next = new ListNode(sum %10);
        result = result->next;

        if(l1 != NULL) l1 = l1->next;
        if(l2 != NULL) l2 = l2->next;
    }

    return cur->next;
}

void LIST::addToList(ListNode*list, int data) {
    ListNode* cur;
    cur = list;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = new ListNode(data);
}

void LIST::printList(ListNode *list) {
    ListNode* cur;
    cur = list;
    cout << "[";
    while (cur != NULL) {
        cout << " "<< cur->val;
        cur = cur->next;
    }
    cout << "]"<<endl;
}

void LIST::listRun() {
    cout << ' ' <<endl;
    ListNode* l1 = new LIST::ListNode(5);
    addToList(l1, 3);
    addToList(l1, 7);
    printList(l1);

    ListNode* l2 = new LIST::ListNode(1);
    addToList(l2, 8);
    addToList(l2, 9);
    printList(l2);

//    ListNode* l3 = addTwoNumbers(l1, l2);
    ListNode* l3 = mergeTwoLists(l1, l2);
    printList(l3);
    cout << " " <<endl;
}

LIST::ListNode *LIST::mergeTwoLists(LIST::ListNode *l1, LIST::ListNode *l2) {
    ListNode *l3 = new ListNode(-1);
    ListNode * result = l3;
    ListNode* cur_l1 = l1;
    ListNode* cur_l2 = l2;
    while (cur_l1 != NULL && cur_l2 != NULL) {
        if (cur_l1->val < cur_l2->val) {
            result->next = new ListNode(cur_l1->val);
            cur_l1 = cur_l1->next;
        } else {
            result->next = new ListNode(cur_l2->val);
            cur_l2 = cur_l2->next;
        }
        result = result->next;
    }
    while (cur_l1) {
        result->next = cur_l1;
        cur_l1 = cur_l1->next;
        result = result->next;
    }
    while (cur_l2) {
        result->next = cur_l2;
        cur_l2 = cur_l2->next;
        result = result->next;
    }

    return l3->next;
}

LIST::ListNode *LIST::reverseList(LIST::ListNode *head) {
    ListNode *preNode = NULL;
    ListNode *curNode = head;
    while (curNode != NULL) {
        ListNode *nextNode = curNode->next;
        curNode->next = preNode;
        preNode = curNode;
        curNode = nextNode;

    }
    return preNode;
}



