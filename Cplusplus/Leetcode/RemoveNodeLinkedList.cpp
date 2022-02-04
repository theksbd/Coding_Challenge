// success
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int size = 0;
        ListNode *current = head;
        while (current != nullptr)
        {
            size++;
            current = current->next;
        }
        current = head;
        if (n == size)
        {
            head = head->next;
            delete current;
            return head;
        }
        current = head->next;
        ListNode *prev = head;
        for (int i = 1; i < size - n; i++)
        {
            current = current->next;
            prev = prev->next;
        }
        prev->next = current->next;
        delete current;
        return head;
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
    Solution s;
    ListNode *head = new ListNode(1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    printList(head);
    head = s.removeNthFromEnd(head, 2);
    printList(head);
    return 0;
}