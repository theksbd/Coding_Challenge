// success
// https://leetcode.com/problems/add-digits/
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
    int addDigits(int num)
    {
        if (num < 10)
            return num;
        int next_num = 0;
        while (num > 0)
        {
            next_num += num % 10;
            num /= 10;
            if (num == 0 && next_num >= 10)
            {
                num = next_num;
                next_num = 0;
            }
        }
        return next_num;
    }
};

int main()
{
    Solution s;
    cout << s.addDigits(15) << endl;
    return 0;
}