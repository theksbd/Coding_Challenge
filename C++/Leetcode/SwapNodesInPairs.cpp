// success
// https://leetcode.com/problems/swap-nodes-in-pairs/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
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
    // Solution v1.0 - Time complexity: O(n) ~ 0ms - Memory: 7.6mb
    // ListNode *swapPairs(ListNode *head)
    // {
    //     if (head == nullptr || head->next == nullptr)
    //         return head;
    //     ListNode *slow = head;
    //     ListNode *fast = head->next;
    //     while (fast != nullptr)
    //     {
    //         int val = slow->val;
    //         slow->val = fast->val;
    //         fast->val = val;

    //         slow = fast->next;
    //         if (!slow)
    //             break;
    //         fast = slow->next;
    //     }
    //     return head;
    // }

    // Solution v2.0 - Time complexity: O(n) ~ 0ms - Memory: 7.6mb
    ListNode *swapPairs(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *slow = head;
        ListNode *fast = head->next;
        ListNode *prev = head;
        bool first = true;
        while (fast != nullptr)
        {
            slow->next = fast->next;
            fast->next = slow;
            if (first)
            {
                first = false;
                head = fast;
            }
            else
                prev->next = fast;
            prev = slow;

            slow = slow->next;
            if (!slow)
                break;
            fast = slow->next;
        }
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
    insert(head, 6);
    printList(head);
    head = s.swapPairs(head);
    printList(head);
    return 0;
}