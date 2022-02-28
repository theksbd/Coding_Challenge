// success
// https://leetcode.com/problems/linked-list-cycle-ii/
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
    // Solution v1.0 - Time complexity: O(n) ~ 26ms - Memory: 9.9mb
    // ListNode *detectCycle(ListNode *head)
    // {
    //     set<ListNode *> exist;
    //     ListNode *current = head;
    //     while (current != nullptr)
    //     {
    //         if (exist.find(current) != exist.end())
    //             return current;
    //         exist.insert(current);
    //         current = current->next;
    //     }
    //     return nullptr;
    // }

    // Solution v2.0 - Time complexity: O(n) ~ 26ms - Memory: 9.9mb
    ListNode *detectCycle(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        ListNode *slow = head;
        ListNode *fast = head;
        bool is_cycle = false;
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
            {
                // is cycle
                while (head != slow)
                {
                    head = head->next;
                    slow = slow->next;
                }
                return slow;
            }
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
    ListNode *head = new ListNode(1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    head->next->next->next->next = head->next; // tail connects to node index 1
    ListNode *cycleNode = s.detectCycle(head);
    for (int i = 0; i < 6; i++)
    {
        cout << cycleNode->val << ' ';
        cycleNode = cycleNode->next;
    }
    return 0;
}