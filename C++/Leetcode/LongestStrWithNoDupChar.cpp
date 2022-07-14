// success
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        string sub;
        int res = 0;
        for (char c : s)
        {
            int pos = sub.find(c);
            if (pos != string::npos)
            {
                res = max(res, int(sub.size()));
                sub = sub.substr(pos + 1);
            }
            sub += c;
        }
        res = max(res, int(sub.size()));
        return res;
    }
};

int main()
{
    // Solution v1.0 - Time complexity: O() ~ ms - Memory: mb
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solution s;
    cout << s.lengthOfLongestSubstring("aaaab") << endl;
    return 0;
}