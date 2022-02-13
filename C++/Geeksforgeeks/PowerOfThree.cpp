// success
// https://practice.geeksforgeeks.org/problems/check-a-integer-is-power-of-3-or-not3850/1
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
    string isPowerof3(int n)
    {
        // code here
        if (n <= 0)
            return "No";
        if (n % 2 == 0)
            return "No";
        if (n % 3 != 0 && n != 1)
            return "No";
        while (n > 1)
        {
            if (n % 3 != 0)
                return "No";
            n /= 3;
        }
        return "Yes";
    }
};

int main()
{
    Solution s;
    cout << s.isPowerof3(9) << endl;
    return 0;
}