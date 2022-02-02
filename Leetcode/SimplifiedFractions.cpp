// success
// https://leetcode.com/problems/simplified-fractions/
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

    vector<string> simplifiedFractions(int n)
    {
        vector<string> res;
        int numerator = 1;
        for (int i = 2; i <= n; i++)
        {
            if (numerator >= i)
                continue;
            if (gcd(i, numerator) == 1)
                res.push_back(to_string(numerator) + "/" + to_string(i));
            if (i == n && numerator < n - 1)
            {
                numerator++;
                i = 1; // then i will update to 2 by i++ of update process of for loop
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<string> v = s.simplifiedFractions(4);
    for (string str : v)
        cout << str << " ";
    return 0;
}