// success
// https://leetcode.com/problems/permutations/
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

using namespace std;

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        if (nums.size() <= 1)
            return {nums};
        vector<vector<int>> res;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            vector<int> nums_temp = nums;
            nums_temp.erase(nums_temp.begin() + i);
            vector<vector<int>> res_temp = permute(nums_temp);

            int size_temp = res_temp.size();
            for (int j = 0; j < size_temp; j++)
            {
                vector<int> res_push = res_temp[j];
                res_push.insert(res_push.begin(), nums[i]);
                res.push_back(res_push);
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> v = s.permute(nums);
    for (vector<int> x : v)
    {
        cout << "[";
        bool first = true;
        for (int a : x)
        {
            first ? cout << a : cout << ", " << a;
            first = false;
        }
        cout << "]\t";
    }
    return 0;
}