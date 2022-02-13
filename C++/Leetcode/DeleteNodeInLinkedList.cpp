// success
// https://leetcode.com/problems/delete-node-in-a-linked-list/
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
    void deleteNode(ListNode *node)
    {
        ListNode *prevNode = node;
        while (node->next != nullptr)
        {
            node->val = node->next->val;
            prevNode = node;
            node = node->next;
        }
        delete node;
        prevNode->next = nullptr;
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
    ListNode *head = new ListNode(4);
    insert(head, 5);
    insert(head, 1);
    insert(head, 9);
    ListNode *deleteNode = head;
    cout << "Input the index where you want to delete: ";
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        deleteNode = deleteNode->next;
    cout << "\nBefore performing delete operation:\n";
    printList(head);
    s.deleteNode(deleteNode);
    cout << "\nAfter performing delete operation:\n";
    printList(head);
    return 0;
}