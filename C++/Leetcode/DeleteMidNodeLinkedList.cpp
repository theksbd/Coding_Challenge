// success
// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
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
    ListNode *deleteMiddle(ListNode *head)
    {
        ListNode *current = head;
        if (head->next == nullptr)
        {
            delete current;
            head = nullptr;
            return head;
        }
        int size = 0;
        while (current != nullptr)
        {
            size++;
            current = current->next;
        }
        ListNode *prev = head;
        current = head->next;
        for (int i = 1; i < size / 2; i++)
        {
            prev = prev->next;
            current = current->next;
        }
        prev->next = current->next;
        delete current;
        return head;
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
    ListNode *head = nullptr;
    // int arr[] = {1, 3, 4, 7, 1, 2, 6};
    int arr[] = {1, 2, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
        insert(head, arr[i]);
    printList(head);
    head = s.deleteMiddle(head);
    printList(head);
    return 0;
}