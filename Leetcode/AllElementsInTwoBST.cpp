// success
// https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
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
    void getNode(TreeNode *root, vector<int> &res)
    {
        if (root != nullptr)
        {
            getNode(root->left, res);
            res.push_back(root->val);
            getNode(root->right, res);
        }
    }
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        vector<int> res;
        getNode(root1, res);
        getNode(root2, res);
        sort(res.begin(), res.end());
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

    TreeNode *root1 = new TreeNode(5);
    root1->left = new TreeNode(3);
    root1->right = new TreeNode(6);
    root1->left->left = new TreeNode(2);
    root1->left->right = new TreeNode(4);
    root1->right->right = new TreeNode(7);

    TreeNode *root2 = new TreeNode(10);
    root2->left = new TreeNode(3);
    root2->right = new TreeNode(26);
    root2->left->left = new TreeNode(1);
    root2->left->right = new TreeNode(8);
    root2->right->right = new TreeNode(50);
    vector<int> v = s.getAllElements(root1, root2);
    for (int x : v)
        cout << x << " ";
    return 0;
}