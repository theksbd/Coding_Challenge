// success
// https://leetcode.com/problems/replace-all-digits-with-characters/
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
    string replaceDigits(string s)
    {
        if (s.size() <= 1)
            return s;
        int size = s.size();
        for (int i = 1; i < size; i += 2)
            s[i] = s[i - 1] + (int)(s[i] - '0');
        return s;
    }
};

int main()
{
    Solution s;
    cout << s.replaceDigits("a1c1e1") << endl;
    return 0;
}