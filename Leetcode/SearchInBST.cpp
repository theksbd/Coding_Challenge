// success
// https://leetcode.com/problems/search-in-a-binary-search-tree/
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
    // Solution v1.0: Recursion: 44ms - 34.8mb
    // TreeNode *searchBST(TreeNode *root, int val)
    // {
    //     if (root == nullptr)
    //         return nullptr;
    //     if (val < root->val)
    //         return searchBST(root->left, val);
    //     else if (val > root->val)
    //         return searchBST(root->right, val);
    //     else
    //         return root;
    // }

    // Solution v2.0: While loop: 40ms - 34.9mb
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == nullptr)
            return nullptr;
        TreeNode *current = root;
        while (current != nullptr)
        {
            if (val < current->val)
                current = current->left;
            else if (val > current->val)
                current = current->right;
            else
                return current;
        }
        return nullptr;
    }
};

int main()
{
    Solution s;
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    cout << s.searchBST(root, 2) << endl;
    return 0;
}