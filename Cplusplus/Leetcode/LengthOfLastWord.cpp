// success
// https://leetcode.com/problems/length-of-last-word/
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
    int lengthOfLastWord(string s)
    {
        if (s == "")
            return 0;
        int size = s.size();
        int start = 0, end = 0;
        bool first = true;
        for (int i = size - 1; i > 0; i--)
        {
            if (s[i] != ' ' && first)
            {
                end = i;
                first = false;
            }
            if (s[i - 1] == ' ' && !first)
            {
                start = i;
                break;
            }
        }
        return end - start + 1;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLastWord("abc") << endl;
    return 0;
}