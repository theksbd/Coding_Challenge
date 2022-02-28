// success
// https://leetcode.com/problems/intersection-of-two-linked-lists/
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
#include <numeric>
#include <climits>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    // ListNode() : val(0), next(nullptr){};
    ListNode(int x) : val(x), next(nullptr){};
    // ListNode(int x, ListNode *next) : val(x), next(next){};
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        set<ListNode *> exist;
        ListNode *current = headA;
        while (current != nullptr)
        {
            exist.insert(current);
            current = current->next;
        }
        current = headB;
        while (current != nullptr)
        {
            if (exist.find(current) != exist.end())
                return current;
            current = current->next;
        }
        return nullptr;
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
    Solution s;

    ListNode *headA = nullptr;
    vector<int> vA = {4, 1, 8, 4, 5};
    for (int x : vA)
        insert(headA, x);
    printList(headA);

    ListNode *headB = nullptr;
    vector<int> vB = {5, 6, 1};
    for (int x : vB)
        insert(headB, x);
    headB->next->next->next = headA->next->next;
    printList(headB);

    ListNode *intersectionNode = s.getIntersectionNode(headA, headB);
    printList(intersectionNode);
    return 0;
}