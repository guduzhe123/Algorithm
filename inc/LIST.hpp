//
// Created by zhouhua on 2020/3/7.
//

#ifndef UNTITLED_LIST_HPP
#define UNTITLED_LIST_HPP

#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;

class LIST {
    public:

    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    /*给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0 开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-two-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    void addToList(ListNode*list, int data);
    void printList(ListNode*list);
    void listRun();

/*21. 合并两个有序链表
 * 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

示例：

输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-two-sorted-lists
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);

/*反转一个单链表。
示例:
输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL
 https://leetcode-cn.com/problems/reverse-linked-list/*/

    ListNode* reverseList(ListNode* head);

/*    编写代码，移除未排序链表中的重复节点。保留最开始出现的节点。
    示例1:
    输入：[1, 2, 3, 3, 2, 1]
    输出：[1, 2, 3]
    示例2:
    输入：[1, 1, 1, 1, 2]
    输出：[1, 2]
    来源：力扣（LeetCode）
    链接：https://leetcode-cn.com/problems/remove-duplicate-node-lcci
            著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
    ListNode* removeDuplicateNodes(LIST::ListNode* head);

};


#endif //UNTITLED_LIST_HPP
