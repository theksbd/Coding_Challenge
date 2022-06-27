// success
// https://leetcode.com/problems/odd-even-linked-list/

#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

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
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return head;
        ListNode *currentOdd = head;
        ListNode *currentEven = head->next;
        ListNode *firstEven = currentEven;
        while (currentOdd != nullptr && currentEven != nullptr)
        {
            ListNode *nextOdd = currentEven->next;
            ListNode *nextEven = nextOdd == nullptr ? nullptr : nextOdd->next;
            currentOdd->next = nextOdd;
            currentEven->next = nextEven;
            if (nextOdd == nullptr)
                break;
            currentOdd = currentOdd->next;
            currentEven = currentEven->next;
        }
        currentOdd->next = firstEven;
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
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << '\n';
}

int main()
{
    // Solution v1.0 - Time complexity: O() ~ ms - Memory: mb
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solution s;
    ListNode *head = new ListNode(1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    printList(head);
    head = s.oddEvenList(head);
    printList(head);
    return 0;
}