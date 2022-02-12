// success
// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
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
#include <climits>

using namespace std;

class Solution
{
public:
    int minimumSum(int num)
    {
        vector<int> v;
        while (num > 0)
        {
            v.push_back(num % 10);
            num /= 10;
        }
        sort(v.begin(), v.end());
        int num1 = v[0] * 10 + v[2];
        int num2 = v[1] * 10 + v[3];
        return num1 + num2;
    }
};

int main()
{
    Solution s;
    cout << s.minimumSum(4009) << endl;
    return 0;
}