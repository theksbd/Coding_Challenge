// success
// https://leetcode.com/problems/add-two-numbers/
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
#include <climits>

using namespace std;

// Definition for singly-linked list.
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *res = nullptr;
        ListNode *current = nullptr;
        int remainder = 0;
        while (l1 != nullptr && l2 != nullptr)
        {
            int sum = l1->val + l2->val;
            sum = sum + remainder;
            remainder = sum / 10;
            sum = sum % 10;
            if (current == nullptr)
            {
                current = new ListNode(sum);
                res = current;
            }
            else
            {
                current->next = new ListNode(sum);
                current = current->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != nullptr)
        {
            int sum = l1->val + remainder;
            remainder = sum / 10;
            sum = sum % 10;
            current->next = new ListNode(sum);
            current = current->next;
            l1 = l1->next;
        }
        while (l2 != nullptr)
        {
            int sum = l2->val + remainder;
            remainder = sum / 10;
            sum = sum % 10;
            current->next = new ListNode(sum);
            current = current->next;
            l2 = l2->next;
        }
        if (remainder != 0)
            current->next = new ListNode(remainder);
        return res;
    }
};

void insert(ListNode *&head, int x)
{
    if (head == nullptr)
    {
        head = new ListNode(x);
        return;
    }
    ListNode *current = head;
    while (current->next != nullptr)
        current = current->next;
    current->next = new ListNode(x);
}

void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << '\n';
}

int main()
{
    Solution s;

    ListNode *head1 = nullptr;
    int arr1[] = {1, 3, 4};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < size; i++)
        insert(head1, arr1[i]);

    ListNode *head2 = nullptr;
    int arr2[] = {1, 2, 1};
    size = sizeof(arr2) / sizeof(arr2[0]);
    for (int i = 0; i < size; i++)
        insert(head2, arr2[i]);

    cout << "List 1: ";
    printList(head1);
    cout << "List 2: ";
    printList(head2);

    ListNode *head = s.addTwoNumbers(head1, head2);
    cout << "\nResult list: ";
    printList(head);
    return 0;
}