// success
// https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1/
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
#include <sstream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node() : data(0), left(nullptr), right(nullptr) {}
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : data(x), left(left), right(right) {}
};

void printTree_PreOrder(Node *root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        printTree_PreOrder(root->left);
        printTree_PreOrder(root->right);
    }
}

void insert(Node *&root, int val)
{
    if (root == nullptr)
    {
        root = new Node(val);
        return;
    }
    Node *current = root;
    Node *parent = root;
    while (current != nullptr)
    {
        parent = current;
        if (val < current->data)
            current = current->left;
        else
            current = current->right;
    }
    if (val < parent->data)
        parent->left = new Node(val);
    else
        parent->right = new Node(val);
}

bool search(Node *root, int x)
{
    if (root == nullptr)
        return false;
    Node *current = root;
    while (current != nullptr)
    {
        if (x == current->data)
            return true;
        if (x < current->data)
            current = current->left;
        else
            current = current->right;
    }
    return false;
}

int main()
{
    Node *root = nullptr;
    insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    insert(root, 2);
    insert(root, 4);
    insert(root, 7);
    cout << search(root, 11) << endl;
    printTree_PreOrder(root);
    return 0;
}
