// success
// https://leetcode.com/problems/find-pivot-index/
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
    // Solution v1.0 - Time complexity: O(n^2) ~ 1900ms - Memory: 31mb
    // int pivotIndex(vector<int>& nums) {
    //     int size = nums.size();
    //     for (int i = 0; i < size; i++)
    //     {
    //         int sumLeft = 0, sumRight = 0;
    //         for (int iL = 0; iL < i; iL++)
    //             sumLeft += nums[iL];
    //         for (int iR = i + 1; iR < size; iR++)
    //             sumRight += nums[iR];
    //         if (sumLeft == sumRight)
    //             return i;
    //     }
    //     return -1;
    // }

    // Solution v2.0 - Time complexity: O(n) ~ 20ms - Memory: 31mb
    int pivotIndex(vector<int> &nums)
    {
        int size = nums.size();
        int s1 = 0;
        for (int i = 0; i < size; i++)
            s1 += nums[i];
        int s2 = 0;
        for (int i = 0; i < size; i++)
        {
            s1 -= nums[i];
            if (s1 == s2)
                return i;
            s2 += nums[i];
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> v1 = {1, 2, 3, 4, 3, 2, 1};
    vector<int> v2 = {1, 100, 50, -51, 1, 1};
    vector<int> v3 = {20, 10, -80, 10, 10, 15, 35};
    cout << s.pivotIndex(v1) << endl;
    cout << s.pivotIndex(v2) << endl;
    cout << s.pivotIndex(v3) << endl;
    return 0;
}