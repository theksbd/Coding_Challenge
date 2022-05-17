// success
// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
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

// Solution v1.0 - Time complexity: O(n) ~ 676ms - Memory: 163.9mb
// class Solution
// {
// public:
//     void inOrder(TreeNode *original, TreeNode *cloned, TreeNode *target, TreeNode *&res)
//     {
//         if (original == nullptr)
//             return;
//         inOrder(original->left, cloned->left, target, res);
//         if (original->val == target->val)
//         {
//             res = cloned;
//             return;
//         }
//         inOrder(original->right, cloned->right, target, res);
//     }

//     TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
//     {
//         if (original == nullptr || cloned == nullptr)
//             return nullptr;
//         TreeNode *res = nullptr;
//         inOrder(original, cloned, target, res);
//         return res;
//     }
// };

// Solution v2.0 - Time complexity: O(n) ~ 670ms - Memory: 163.8mb
class Solution
{
public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        if (original == nullptr || cloned == nullptr)
            return nullptr;
        if (original == target)
            return cloned;
        TreeNode *leftTree = getTargetCopy(original->left, cloned->left, target);
        TreeNode *rightTree = getTargetCopy(original->right, cloned->right, target);
        if (leftTree)
            return leftTree;
        if (rightTree)
            return rightTree;
        return nullptr;
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

    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(11);

    TreeNode *root1 = new TreeNode(4);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(7);
    root1->left->left = new TreeNode(1);
    root1->left->right = new TreeNode(3);
    root1->right->right = new TreeNode(11);

    cout << s.getTargetCopy(root, root1, root->left->right) << endl;
    cout << root1->left->right << endl;
    return 0;
}