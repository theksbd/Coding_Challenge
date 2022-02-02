// success
// https://leetcode.com/problems/increasing-order-search-tree/
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

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void help(TreeNode *root, queue<TreeNode *> &q)
    {
        // take all nodes in Inorder traversal
        if (root != nullptr)
        {
            help(root->left, q);
            q.push(root);
            help(root->right, q);
        }
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        if (!root->left && !root->right)
            return root;
        queue<TreeNode *> q;
        help(root, q);
        root = q.front();
        q.pop();
        TreeNode *parent = root;
        while (q.empty() == false)
        {
            parent->left = nullptr;
            parent->right = q.front();
            parent = parent->right;
            q.pop();
        }
        parent->left = nullptr;
        return root;
    }
};

void printTree_PreOrder(TreeNode *root)
{
    if (root != nullptr)
    {
        cout << root->val << " ";
        printTree_PreOrder(root->left);
        printTree_PreOrder(root->right);
    }
}

void printTree_InOrder(TreeNode *root)
{
    if (root == nullptr)
        return;
    printTree_InOrder(root->left);
    cout << root->val << " ";
    printTree_InOrder(root->right);
}

int main()
{
    Solution s;

    // TreeNode *root = new TreeNode(4);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(7);
    // root->left->left = new TreeNode(1);
    // root->left->right = new TreeNode(3);
    // root->right->right = new TreeNode(11);

    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(3);

    root = s.increasingBST(root);
    printTree_PreOrder(root);
    return 0;
}