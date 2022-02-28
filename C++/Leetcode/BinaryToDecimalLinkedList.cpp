// success
// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
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
    int getDecimalValue(ListNode *head)
    {
        int res = 0;
        int size = 0;
        stack<int> st;
        ListNode *current = head;
        while (current != nullptr)
        {
            if (current->val == 1)
                st.push(size);
            size++;
            current = current->next;
        }
        while (st.empty() == false)
        {
            int value = st.top();
            st.pop();
            if (value == size - 1)
            {
                res += 1;
                continue;
            }
            else
                value = size - value - 1;
            res += pow(2, value);
        }
        return res;
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
    insert(head, 0);
    insert(head, 1);
    printList(head);
    cout << s.getDecimalValue(head) << endl;
    return 0;
}