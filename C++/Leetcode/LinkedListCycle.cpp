// success
// https://leetcode.com/problems/linked-list-cycle/
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
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr)
            return false;
        ListNode *fast = head->next;
        ListNode *slow = head;

        while (slow != fast)
        {
            if (fast == nullptr || fast->next == nullptr)
                return false;
            fast = fast->next->next;
            slow = slow->next;
        }
        return true;
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
    cout << s.hasCycle(head) << endl;
    head->next->next->next->next = head->next;
    cout << s.hasCycle(head) << endl;
    return 0;
}