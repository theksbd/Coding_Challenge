// success
// https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == nullptr)
            return nullptr;
        ListNode *current = head;
        ListNode *prev = head;
        current = current->next;
        while (current != nullptr)
        {
            if (current->val == val)
            {
                ListNode *temp = current;
                current = current->next;
                prev->next = current;
                delete temp;
                continue;
            }
            current = current->next;
            prev = prev->next;
        }
        if (head->val == val)
        {
            current = head;
            head = head->next;
            delete current;
        }
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
    // int arr[] = {1, 2, 6, 3, 4, 5, 6};
    int arr[] = {1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
        insert(head, arr[i]);
    printList(head);
    head = s.removeElements(head, 1);
    printList(head);
    return 0;
}