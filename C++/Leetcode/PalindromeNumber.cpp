// success
// https://leetcode.com/problems/palindrome-number/
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

using namespace std;

class Solution
{
public:
    // Solution v1.0: Time complexity: O(n) ~ 4ms - Memory: 6mb
    // bool isPalindrome(int x)
    // {
    //     if (x < 0)
    //         return false;
    //     string s = to_string(x);
    //     int size = s.size();
    //     for (int i = 0; i < size / 2; i++)
    //     {
    //         if (s[i] != s[size - 1 - i])
    //             return false;
    //     }
    //     return true;
    // }

    // Solution v2.0: Time complexity: O(n) ~ 8ms - Memory: 6mb
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        long long rev = 0;
        int temp = x;
        while (temp > 0)
        {
            rev *= 10;
            rev += temp % 10;
            temp /= 10;
        }
        return (rev == x);
    }
};

int main()
{
    Solution s;
    cout << s.isPalindrome(123) << endl;
    cout << s.isPalindrome(121) << endl;
    cout << s.isPalindrome(-121) << endl;
    cout << s.isPalindrome(22) << endl;
    return 0;
}