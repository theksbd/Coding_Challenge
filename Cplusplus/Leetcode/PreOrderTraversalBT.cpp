// success
// https://leetcode.com/problems/binary-tree-preorder-traversal/
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
    void helpPreOrder(TreeNode *root, vector<int> &res)
    {
        if (root != nullptr)
        {
            res.push_back(root->val);
            helpPreOrder(root->left, res);
            helpPreOrder(root->right, res);
        }
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> res;
        helpPreOrder(root, res);
        return res;
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

int main()
{
    Solution s;
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);
    printTree_PreOrder(root);
    cout << '\n';
    vector<int> v = s.preorderTraversal(root);
    for (int x : v)
        cout << x << " ";
    return 0;
}