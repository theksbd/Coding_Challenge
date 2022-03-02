// success
// https://leetcode.com/problems/is-subsequence/
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
#include <numeric>
#include <climits>

using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (t.size() < s.size())
            return false;
        int i = 0, j = 0;
        int size_s = s.size();
        int size_t = t.size();
        while (i < size_s && j < size_t)
        {
            if (t[j] == s[i])
                i++;
            j++;
        }
        return (i == size_s);
    }
};

int main()
{
    Solution s;
    s.isSubsequence("abc", "wejrwofjbhidacubiasbdqcw") ? cout << "True" : cout << "False";
    return 0;
}