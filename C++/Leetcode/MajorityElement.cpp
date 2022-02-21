// success
// https://leetcode.com/problems/majority-element/submissions/
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
    // Solution v1.0 - Time complexity: O(n) ~ 24ms - Memory: 19.6mb
    // int majorityElement(vector<int> &nums)
    // {
    //     if (nums.size() == 1)
    //         return nums[0];
    //     map<int, int> freq;
    //     int count = nums.size() / 2;
    //     for (int x : nums)
    //     {
    //         freq[x]++;
    //         if (freq[x] > count)
    //             return x;
    //     }
    //     return nums[0]; // this will never happen
    // }

    // Solution v2.0 - Time complexity: O(n) ~ ms - Memory: mb
    int majorityElement(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int res = 0;
        int count = 0;
        for (int x : nums)
        {
            if (count == 0)
            {
                res = x;
                count++;
            }
            else if (x == res)
                count ++;
            else
                count--;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {2, 2, 1, 1, 1, 2, 2};
    cout << s.majorityElement(v) << endl;
    return 0;
}