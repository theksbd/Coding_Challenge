// success
// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
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
    bool checkString(string s)
    {
        if (s.size() == 1)
            return true;
        int size = s.size();
        bool exist_b = false; // true if there is at least 1 'b' that has been processed
        for (int i = 0; i < size; i++)
        {
            if (s[i] == 'b')
                exist_b = true;
            else
            {
                if (exist_b)
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.checkString("abab") << endl;
    return 0;
}