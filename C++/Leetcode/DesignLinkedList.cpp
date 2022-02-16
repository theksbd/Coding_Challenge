// success
// https://leetcode.com/problems/design-linked-list/
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

class MyLinkedList
{
public:
    struct Node
    {
        int val;
        Node *next;
        Node() : val(0), next(nullptr){};
        Node(int x) : val(x), next(nullptr){};
        Node(int x, Node *next) : val(x), next(next){};
    };
    Node *head;
    Node *tail;
    int size;

    MyLinkedList()
    {
        this->head = this->tail = nullptr;
        this->size = 0;
    }

    int get(int index)
    {
        if (index < 0 || index >= size)
            return -1;
        if (index == 0)
            return this->head->val;
        if (index == this->size - 1)
            return this->tail->val;
        Node *current = this->head->next;
        for (int i = 1; i < index; i++)
            current = current->next;
        return current->val;
    }

    void addAtHead(int val)
    {
        Node *current = new Node(val, this->head);
        this->head = current;
        if (this->size == 0)
            this->tail = current;
        this->size++;
    }

    void addAtTail(int val)
    {
        Node *current = new Node(val);
        if (this->tail)
            this->tail->next = current;
        this->tail = current;
        if (this->size == 0)
            this->head = current;
        this->size++;
    }

    void addAtIndex(int index, int val)
    {
        if (index > this->size)
            return;
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        if (index == this->size)
        {
            addAtTail(val);
            return;
        }
        Node *prev = this->head;
        Node *current = new Node(val);
        for (int i = 0; i < index - 1; i++)
            prev = prev->next;
        current->next = prev->next;
        prev->next = current;
        this->size++;
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= this->size)
            return;
        if (index == 0)
        {
            Node *dltNode = this->head;
            this->head = this->head->next;
            delete dltNode;
            this->size--;
            return;
        }
        Node *current = this->head->next;
        Node *prev = this->head;
        for (int i = 1; i < index; i++)
        {
            current = current->next;
            prev = prev->next;
        }
        if (current == tail)
            this->tail = prev;
        prev->next = current->next;
        delete current;
        this->size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main()
{
    MyLinkedList *myLinkedList = new MyLinkedList();
    myLinkedList->addAtHead(1);
    myLinkedList->addAtTail(3);
    myLinkedList->addAtIndex(1, 2); // linked list becomes 1->2->3
    myLinkedList->get(1);           // return 2
    myLinkedList->deleteAtIndex(1); // now the linked list is 1->3
    myLinkedList->get(1);           // return 3
    return 0;
}