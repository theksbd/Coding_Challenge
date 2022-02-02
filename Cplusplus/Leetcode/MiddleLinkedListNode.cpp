// success
// https://leetcode.com/problems/middle-of-the-linked-list/
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
    ListNode *middleNode(ListNode *head)
    {
        if (head == nullptr)
            return nullptr;
        ListNode *current = head;
        int size = 0;
        while (current != nullptr)
        {
            current = current->next;
            size++;
        }
        current = head;
        for (int i = 0; i < size / 2; i++)
            current = current->next;
        return current;
    }
};

void insert(ListNode *head, int x)
{
    ListNode *current = head;
    while (current->next != nullptr)
        current = current->next;
    ListNode *newNode = new ListNode(x);
    current->next = newNode;
}

void printList(ListNode *head)
{
    if (head == nullptr)
        return;
    cout << head->val << " ";
    printList(head->next);
}

int main()
{
    ListNode *list = new ListNode(1);
    insert(list, 2);
    insert(list, 3);
    insert(list, 4);
    insert(list, 5);
    insert(list, 6);
    // insert(list, 7);

    Solution s;
    ListNode *middleNode = s.middleNode(list);
    printList(middleNode);
    cout << '\n';
    return 0;
}