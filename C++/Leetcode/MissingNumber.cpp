// success
// https://leetcode.com/problems/missing-number/
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
    // Solution v1.0 - Time complexity: O(nlogn) ~ 74ms - Memory: 25.8mb
    // int missingNumber(vector<int> &nums)
    // {
    //     int res = 0;
    //     int n = nums.size();
    //     set<int> exist;
    //     for (int x : nums)
    //         exist.insert(x);
    //     for (int i = 0; i <= n; i++)
    //     {
    //         if (exist.find(i) == exist.end())
    //         {
    //             res = i;
    //             break;
    //         }
    //     }
    //     return res;
    // }

    // Solution v2.0 - Time complexity: O(n) ~ 8ms - Memory: 17.9mb
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        int size = nums.size();
        for (int x : nums)
            sum += x;
        int sumToN = (size * (size + 1)) / 2;
        return sumToN - sum;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solution s;
    vector<int> v = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << s.missingNumber(v) << endl;
    return 0;
}