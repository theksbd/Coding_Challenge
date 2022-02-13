// success
// https://leetcode.com/problems/subsets/
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
#include <climits>

using namespace std;

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> res = {{}};
        for (int x : nums)
        {
            int size = res.size();
            for (int i = 0; i < size; i++)
            {
                vector<int> v = res[i];
                v.push_back(x);
                res.push_back(v);
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 2, 3};
    vector<vector<int>> res = s.subsets(v);
    for (vector<int> a : res)
    {
        for (int x : a)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}