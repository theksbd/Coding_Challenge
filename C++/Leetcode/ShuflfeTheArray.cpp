// success
// https://leetcode.com/problems/shuffle-the-array/
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

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            res.push_back(nums[i]);
            res.push_back(nums[i + n]);
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {2, 5, 1, 3, 4, 7};
    v = s.shuffle(v, 3);
    for (int x : v)
        cout << x << " ";
    return 0;
}