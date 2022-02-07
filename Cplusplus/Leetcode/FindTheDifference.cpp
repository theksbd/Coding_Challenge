// success
// https://leetcode.com/problems/find-the-difference/
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
    char findTheDifference(string s, string t)
    {
        if (s == "")
            return t[0];
        vector<char> exist(26, 0);
        char diff = '|';
        for (char c : s)
            exist[c - 'a']++;
        for (char c : t)
            exist[c - 'a']--;
        for (int i = 0; i < 26; i++)
        {
            if (exist[i] != 0)
            {
                diff = char(i + 'a');
                break;
            }
        }
        return diff;
    }
};

int main()
{
    Solution s;
    cout << s.findTheDifference("abcd", "badce") << endl;
    cout << s.findTheDifference("aa", "aaa") << endl;
    cout << s.findTheDifference("abbcd", "bbadce") << endl;
    return 0;
}