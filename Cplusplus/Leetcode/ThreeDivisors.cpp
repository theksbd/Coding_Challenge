// success
// https://leetcode.com/problems/three-divisors/
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
    bool isThree(int n)
    {
        if (n == 1)
            return false;
        // n initially has 2 divisors are 1 and n itself
        int sq = sqrt(n);
        for (int i = 2; i < sq; i++)
        {
            if (n % i == 0)
                return false; // if n has i as its divisor, n will also has (n / i) as its other divisor
                              // which makes the number of divisors of n grow by 2 to 4 divisors, so we will return false
        }
        if (sq * sq != n)
            return false;
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isThree(4) << endl;
    cout << s.isThree(3) << endl;
    return 0;
}