// success
// https://leetcode.com/problems/find-greatest-common-divisor-of-array/
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
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    int findGCD(vector<int> &nums)
    {
        int min = 1001, max = -1;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if (max < nums[i])
                max = nums[i];
            if (min > nums[i])
                min = nums[i];
        }
        return gcd(min, max);
    }
};

int main()
{
    Solution s;
    vector<int> v = {2, 5, 6, 9, 10};
    cout << s.findGCD(v) << endl;
    return 0;
}