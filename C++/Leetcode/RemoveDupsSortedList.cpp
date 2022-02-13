// success
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *prev = head;
        ListNode *current = head->next;
        while (current != nullptr)
        {
            if (current->val == prev->val)
            {
                prev->next = current->next;
                ListNode *dltNode = current;
                current = current->next;
                delete dltNode;
                continue;
            }
            prev = prev->next;
            current = current->next;
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
    vector<int> v = {1, 1, 2, 3, 3};
    for (int x : v)
        insert(head, x);
    printList(head);
    head = s.deleteDuplicates(head);
    printList(head);
    return 0;
}