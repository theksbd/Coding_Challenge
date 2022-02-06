// success
// https://leetcode.com/problems/merge-two-sorted-lists/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

//Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){};
    ListNode(int x) : val(x), next(nullptr){};
    ListNode(int x, ListNode *next) : val(x), next(next){};
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;
        ListNode *res = nullptr, *current = res;
        if (list1->val <= list2->val)
        {
            res = new ListNode(list1->val);
            list1 = list1->next;
        }
        else
        {
            res = new ListNode(list2->val);
            list2 = list2->next;
        }
        current = res;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val <= list2->val)
            {
                ListNode *newNode = new ListNode(list1->val);
                current->next = newNode;
                list1 = list1->next;
            }
            else
            {
                ListNode *newNode = new ListNode(list2->val);
                current->next = newNode;
                list2 = list2->next;
            }
            current = current->next;
        }
        if (list1 != nullptr)
        {
            while (list1 != nullptr)
            {
                ListNode *newNode = new ListNode(list1->val);
                current->next = newNode;
                list1 = list1->next;
                current = current->next;
            }
        }
        else if (list2 != nullptr)
        {
            while (list2 != nullptr)
            {
                ListNode *newNode = new ListNode(list2->val);
                current->next = newNode;
                list2 = list2->next;
                current = current->next;
            }
        }
        return res;
    }
};

void insert(ListNode *head, int x)
{
    ListNode *current = head;
    while (current->next != nullptr)
        current = current->next;
    current->next = new ListNode(x);
}

void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << '\n';
}

int main()
{
    ListNode *list1 = new ListNode(1);
    insert(list1, 2);
    insert(list1, 4);
    // printList(list1);
    // cout << '\n';

    ListNode *list2 = new ListNode(5);
    // insert(list2, 3);
    // insert(list2, 4);
    // printList(list2);
    // cout << '\n';

    Solution s;
    ListNode *mergeList = s.mergeTwoLists(list1, list2);
    printList(mergeList);
    cout << '\n';

    return 0;
}