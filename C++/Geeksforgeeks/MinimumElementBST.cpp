// success
// https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1/
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

int minValue(Node *root)
{
    // Code here
    if (!root)
        return -1;
    while (root->left)
        root = root->left;
    return root->data;
}

int main()
{
    Node *root1 = new Node(5);
    root1->left = new Node(3);
    root1->right = new Node(6);
    root1->left->left = new Node(2);
    root1->left->right = new Node(4);
    root1->right->right = new Node(7);
    cout << minValue(root1) << endl;
    printTree_PreOrder(root1);
    return 0;
}
