//success
// https://leetcode.com/problems/range-sum-of-bst/
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
    void help(TreeNode *root, int low, int high, int &res)
    {
        if (root != nullptr)
        {
            if (root->val >= low && root->val <= high)
                res += root->val;
            help(root->left, low, high, res);
            help(root->right, low, high, res);
        }
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int res = 0;
        help(root, low, high, res);
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
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    cout << s.rangeSumBST(root, 2, 4) << endl;
    return 0;
}