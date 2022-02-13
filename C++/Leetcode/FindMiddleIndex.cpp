// success
// https://leetcode.com/problems/find-the-middle-index-in-array/
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
    int findMiddleIndex(vector<int> &nums)
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
    cout << s.findMiddleIndex(v1) << endl;
    cout << s.findMiddleIndex(v2) << endl;
    cout << s.findMiddleIndex(v3) << endl;
    return 0;
}