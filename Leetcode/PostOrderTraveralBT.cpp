// success
// https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    void helpPostOrder(TreeNode *root, vector<int> &res)
    {
        if (root != nullptr)
        {
            helpPostOrder(root->left, res);
            helpPostOrder(root->right, res);
            res.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> res;
        helpPostOrder(root, res);
        return res;
    }
};

void printTree_PostOrder(TreeNode *root)
{
    if (root != nullptr)
    {
        printTree_PostOrder(root->left);
        printTree_PostOrder(root->right);
        cout << root->val << " ";
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
    printTree_PostOrder(root);
    cout << '\n';
    vector<int> v = s.postorderTraversal(root);
    for (int x : v)
        cout << x << " ";
    return 0;
}