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
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        int size = s.size();
        for (int i = 0; i < size / 2; i++)
        {
            if (s[i] != s[size - 1 - i])
                return false;
        }
        return true;
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