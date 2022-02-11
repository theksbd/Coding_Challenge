// success
// https://leetcode.com/problems/insert-into-a-binary-search-tree/
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
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (root == nullptr)
        {
            root = new TreeNode(val);
            return root;
        }
        TreeNode *current = root;
        TreeNode *parent = root;
        while (current != nullptr)
        {
            parent = current;
            if (val < current->val)
                current = current->left;
            else
                current = current->right;
        }
        if (val < parent->val)
            parent->left = new TreeNode(val);
        else
            parent->right = new TreeNode(val);
        return root;
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
    root = s.insertIntoBST(root, 11);
    printTree_InOrder(root);
    return 0;
}