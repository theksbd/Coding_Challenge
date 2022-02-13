// success
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
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
    // Solution v1.0: Time complexity: O(n^2) ~ 8ms - Memory: 10.4mb
    // vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    // {
    //     vector<int> res;
    //     vector<int> temp = nums;
    //     int size = temp.size();
    //     sort(temp.begin(), temp.end());
    //     for (int x : nums)
    //     {
    //         int count = 0;
    //         for (int i = 0; i < size; i++)
    //         {
    //             if (temp[i] < x)
    //                 count++;
    //             else
    //             {
    //                 res.push_back(count);
    //                 break;
    //             }
    //         }
    //     }
    //     return res;
    // }

    // Solution v2.0: Time complexity: O(n) ~ 4ms - Memory: 10.1mb
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> smaller(101);
        for (int x : nums)
            smaller[x]++;
        for (int i = 1; i < 101; i++)
            smaller[i] += smaller[i - 1];
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            int val = nums[i];
            if (val == 0)
                nums[i] = 0;
            else
                nums[i] = smaller[val - 1];
        }
        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> v = {8, 1, 2, 2, 3};
    vector<int> res = s.smallerNumbersThanCurrent(v);
    for (int x : res)
        cout << x << " ";
    return 0;
}