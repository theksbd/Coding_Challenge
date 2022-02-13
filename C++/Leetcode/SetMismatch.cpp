// https://leetcode.com/problems/set-mismatch/
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
    vector<int> findErrorNums(vector<int> &nums)
    {
        int res1 = -1, res2 = -1; // res1 is duplicated number, res2 is lost number
        for (int x : nums)
        {
            if (nums[abs(x) - 1] < 0)
                res1 = abs(x);
            else
                nums[abs(x) - 1] *= -1;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                res2 = i + 1;
                break;
            }
        }
        return {res1, res2};
    }
};

int main()
{
    Solution s;
    vector<int> v = {37, 62, 43, 27, 12, 66, 36, 18, 39, 54, 61, 65, 47, 32, 23, 2, 46, 8, 4, 24, 29, 38, 63, 39, 25, 11, 45, 28, 44, 52, 15, 30, 21, 7, 57, 49, 1, 59, 58, 14, 9, 40, 3, 42, 56, 31, 20, 41, 22, 50, 13, 33, 6, 10, 16, 64, 53, 51, 19, 17, 48, 26, 34, 60, 35, 5};
    vector<int> res = s.findErrorNums(v);
    for (int x : res)
        cout << x << " ";
    return 0;
}