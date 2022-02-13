// success
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
    void help(TreeNode *root, vector<int> &v)
    {
        // take all nodes in Inorder traversal
        if (root != nullptr)
        {
            help(root->left, v);
            v.push_back(root->val);
            help(root->right, v);
        }
    }
    bool findTarget(TreeNode *root, int k)
    {
        if (!root->left && !root->right)
            return false;
        vector<int> v;
        help(root, v);

        int low = 0, high = v.size() - 1;
        while (low < high)
        {
            if (v[low] + v[high] > k)
                high--;
            else if (v[low] + v[high] < k)
                low++;
            else
                return true;
        }
        return false;
    }
};

void insertBST(TreeNode *&root, int val)
{
    if (root == nullptr)
    {
        root = new TreeNode(val);
        return;
    }
    TreeNode *current = root;
    TreeNode *parent = root;
    while (current != nullptr)
    {
        parent = current;
        if (val < current->val)
            current = current->left;
        else if (val > current->val)
            current = current->right;
    }
    if (val < parent->val)
        parent->left = new TreeNode(val);
    else
        parent->right = new TreeNode(val);
}

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

    TreeNode *root1 = nullptr;
    insertBST(root1, 4);
    insertBST(root1, 2);
    insertBST(root1, 7);
    insertBST(root1, 3);
    insertBST(root1, 11);

    // TreeNode *root2 = nullptr;
    // insertBST(root2, 2);
    // insertBST(root2, 1);
    // insertBST(root2, 4);
    // insertBST(root2, 3);

    cout << s.findTarget(root1, 19) << endl;
    return 0;
}