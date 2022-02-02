// success
// https://leetcode.com/problems/delete-node-in-a-bst/
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
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == nullptr)
            return nullptr;
        if (key < root->val)
            root->left = deleteNode(root->left, key);
        else if (key > root->val)
            root->right = deleteNode(root->right, key);
        else
        {
            // leaf or 1 child
            if (root->left == nullptr)
            {
                TreeNode *dltNode = root;
                root = root->right;
                delete dltNode;
                return root;
            }
            else if (root->right == nullptr)
            {
                TreeNode *dltNode = root;
                root = root->left;
                delete dltNode;
                return root;
            }
            // 2 child
            else
            {
                TreeNode *dltNode = root->left;
                while (dltNode->right != nullptr)
                    dltNode = dltNode->right;
                root->val = dltNode->val;
                root->left = deleteNode(root->left, dltNode->val);
            }
        }
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
    cout << s.deleteNode(root, 3) << endl;
    printTree_PreOrder(root);
    return 0;
}