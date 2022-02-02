// success
// https://leetcode.com/problems/rotate-array/
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
    // Solution v1.0: Time complexity: Time Limit Exceeded - Memory: Can't calculate
    // void rotate(vector<int> &nums, int k)
    // {
    //     if (nums.size() == 1)
    //         return;
    //     int i = 0;
    //     int size = nums.size();
    //     while (i < k)
    //     {
    //         int val = nums[size - 1];
    //         nums.erase(nums.end() - 1);
    //         nums.insert(nums.begin(), val);
    //         i++;
    //     }
    // }

    // Solution v2.0: Time complexity: O(n) ~ 28ms - Memory: 25.1mb
    void reverse_(vector<int> &v, int i, int j)
    {
        while (i < j)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {
        int size = nums.size();
        k %= size;
        reverse_(nums, 0, size - k - 1);
        reverse_(nums, size - k, size - 1);
        reverse_(nums, 0, size - 1);
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    s.rotate(v, 3);
    for (int x : v)
        cout << x << " ";
    return 0;
}