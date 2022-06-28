// success
// https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode *head)
    {
        if (head->next == nullptr)
            return true;
        vector<int> list;
        ListNode *slowNode = head;
        ListNode *fastNode = head;
        while (fastNode != nullptr && fastNode->next != nullptr)
        {
            list.push_back(slowNode->val);
            slowNode = slowNode->next;
            fastNode = fastNode->next->next;
        }
        if (fastNode != nullptr) // the size of linked list is odd
            slowNode = slowNode->next;
        for (int i = list.size() - 1; i >= 0; i--)
        {
            if (list[i] != slowNode->val)
                return false;
            slowNode = slowNode->next;
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
    int arr[] = {1, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
        insert(head, arr[i]);
    printList(head);
    s.isPalindrome(head) ? cout << "Palindrome\n" : cout << "Not Palindrome\n";
    return 0;
}