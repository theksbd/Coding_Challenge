// success
// https://leetcode.com/problems/third-maximum-number/
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
    int thirdMax(vector<int> &nums)
    {
        vector<long long> maxVal(3, -3000000000); // declare a vector with 3 spaces whose elements are sorted in decreasing order
        for (int num : nums)
        {
            if (num > maxVal[0])
            {
                maxVal[2] = maxVal[1];
                maxVal[1] = maxVal[0];
                maxVal[0] = num;
            }
            else if (num == maxVal[0])
                continue;
            else if (num > maxVal[1])
            {
                maxVal[2] = maxVal[1];
                maxVal[1] = num;
            }
            else if (num == maxVal[1])
                continue;
            else if (num > maxVal[2])
                maxVal[2] = num;
        }
        if (maxVal[2] == -3000000000)
            return maxVal[0];
        return maxVal[2];
    }
};

int main()
{
    Solution s;
    // vector<int> v = {2, 16, 14, 7, 0, -11, 25, 20, -7, -30, -101, 100, 35, 89, 7, 5, 0, 16};
    vector<int> v = {1, -2147483647 - 1, 2};
    // vector<int> v = {1, 2, 2};

    cout << s.thirdMax(v) << endl;
    return 0;
}