// success
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
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
    void help(TreeNode *root, vector<int> &node)
    {
        if (root == nullptr)
            return;
        help(root->left, node);
        node.push_back(root->val);
        help(root->right, node);
    }

    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> node;
        help(root, node);
        return node[k - 1];
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
    printTree_InOrder(root);
    cout << '\n';
    cout << s.kthSmallest(root, 3) << endl;
    return 0;
}