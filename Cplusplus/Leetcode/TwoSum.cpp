// success
// https://leetcode.com/problems/two-sum/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

class Solution
{
public:
    // Solution v1.0 - Time complexity: O(n^2) ~ 624ms - Memory: 10.2mb
    // vector<int> twoSum(vector<int> &nums, int target)
    // {
    //     vector<int> res;
    //     int size = nums.size();
    //     for (int i = 0; i < size - 1; i++)
    //     {
    //         bool stop = false;
    //         for (int j = i + 1; j < size; j++)
    //         {
    //             if (nums.at(i) + nums.at(j) == target)
    //             {
    //                 res.push_back(i);
    //                 res.push_back(j);
    //                 stop = true;
    //                 break;
    //             }
    //         }
    //         if (stop)
    //             break;
    //     }
    //     return res;
    // }

    // Solution v2.0 - Time complexity: O(nlogn) ~ 0ms - Memory: 10.5mb
    vector<int> twoSum(vector<int> &nums, int target)
    {
        if (nums.size() == 2)
            return {0, 1};
        vector<int> temp = nums;
        int size = temp.size();
        sort(temp.begin(), temp.end());
        bool isNegativeTarget = false;
        if (target < 0)
        {
            target *= -1;
            isNegativeTarget = true;
        }
        int bonus = 0;
        if (temp[0] < 0)
            bonus = temp[0] * -1;
        int i = 0;
        while (i < size)
        {
            if (temp[i] > target + bonus)
                break;
            i++;
        }
        if (isNegativeTarget) // return target to its original value
            target *= -1;
        int left = 0, right = i >= size ? size - 1 : i;
        int res1 = 0, res2 = 0; // res1, res2 at first will store the value of two elements that have sum equal to target
        while (left < right)
        {
            if (temp[left] + temp[right] > target)
                right--;
            else if (temp[left] + temp[right] < target)
                left++;
            else
            {
                res1 = temp[left];
                res2 = temp[right];
                break;
            }
        }
        i = 0;
        bool isGetRes1 = false, isGetRes2 = false;
        while (i < size) // now res1, res2 will store the indexes of those two elements
        {
            if (isGetRes1 && isGetRes2)
                break;
            if (res1 == nums[i] && !isGetRes1)
            {
                res1 = i;
                isGetRes1 = true;
                i++;
                continue;
            }
            if (res2 == nums[i] && !isGetRes2)
            {
                res2 = i;
                isGetRes2 = true;
                i++;
                continue;
            }
            i++;
        }
        return {res1, res2};
    }
};

int main()
{
    Solution s;
    vector<int> v = {-10, 7, 19, 15};
    int target = 9;
    vector<int> res = s.twoSum(v, target);
    cout << "[" << res.front() << ", " << res.back() << "]" << endl;
    return 0;
}