// success
// https://leetcode.com/problems/string-to-integer-atoi/
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
    int myAtoi(string s)
    {
        if (s == "")
            return 0;
        long int res = 0;
        int size = s.size();
        int i = 0;
        while (s[i] == ' ' && i < size)
            i++;
        if (i == size)
            return 0;
        int sign = 1;
        if (s[i] == '-')
        {
            sign = 0;
            i++;
        }
        else if (s[i] == '+')
            i++;
        while (s[i] >= '0' && s[i] <= '9')
        {
            res *= 10;
            if (res <= INT_MIN || res >= INT_MAX)
                break;
            res += s[i] - '0';
            i++;
        }
        if (sign == 0)
            res *= -1;
        if (res < INT_MIN)
            res = INT_MIN;
        else if (res > INT_MAX)
            res = INT_MAX;
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.myAtoi("42") << endl;
    cout << s.myAtoi("   -42") << endl;
    cout << s.myAtoi("42asd") << endl;
    cout << s.myAtoi("-42 with words") << endl;
    cout << s.myAtoi("asdw 42") << endl;
    cout << s.myAtoi("429999999999999999999999999") << endl;
    return 0;
}