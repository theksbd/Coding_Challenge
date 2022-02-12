// success
// https://leetcode.com/problems/split-a-string-in-balanced-strings/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int res = 0;
        int size = s.size();
        int countL = 0;
        int countR = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == 'L')
                countL++;
            else
                countR++;
            if (countL == countR)
            {
                res++;
                countL = 0;
                countR = 0;
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.balancedStringSplit("RLRRLLRLRL") << endl;
    return 0;
}