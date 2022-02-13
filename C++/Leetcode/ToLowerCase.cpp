// success
// https://leetcode.com/problems/to-lower-case/
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
    string toLowerCase(string s)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        return s;
    }
};

int main()
{
    Solution s;
    cout << s.toLowerCase("Hello") << endl;
    return 0;
}