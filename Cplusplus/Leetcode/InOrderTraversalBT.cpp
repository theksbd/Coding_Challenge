// success
// https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    void inorder(TreeNode *root, vector<int> &res)
    {
        if (root != nullptr)
        {
            inorder(root->left, res);
            res.push_back(root->val);
            inorder(root->right, res);
        }
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        if (root == nullptr)
            return {};
        vector<int> res;
        inorder(root, res);
        return res;
    }
};

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
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);
    vector<int> v = s.inorderTraversal(root);
    for (int x : v)
        cout << x << " ";
    return 0;
}