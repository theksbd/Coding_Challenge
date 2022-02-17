// success
// https://leetcode.com/problems/combination-sum/
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

class Solution
{
public:
    void findCombinationSum(int index, int target, vector<int> &candidates, vector<vector<int>> &res, vector<int> &find)
    {
        if (index == candidates.size())
        {
            if (target == 0)
                res.push_back(find);
            return;
        }
        if (candidates[index] <= target)
        {
            find.push_back(candidates[index]);
            findCombinationSum(index, target - candidates[index], candidates, res, find);
            find.pop_back();
        }
        findCombinationSum(index + 1, target, candidates, res, find);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> res;
        vector<int> find;
        findCombinationSum(0, target, candidates, res, find);
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {2, 3, 6, 7};
    vector<vector<int>> res = s.combinationSum(v, 7);
    for (auto x : res)
    {
        for (auto i : x)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}