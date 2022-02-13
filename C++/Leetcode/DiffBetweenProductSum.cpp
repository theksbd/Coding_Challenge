// success
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
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
    int subtractProductAndSum(int n)
    {
        if (n < 10)
            return 0;
        int sum = 0;
        int product = 1;
        while (n > 0)
        {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        return product - sum;
    }
};

int main()
{
    Solution s;
    cout << s.subtractProductAndSum(1234) << endl;
    return 0;
}