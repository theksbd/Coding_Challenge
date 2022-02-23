// success
// https://leetcode.com/problems/truncate-sentence/
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
    string truncateSentence(string s, int k)
    {
        int i = 0;
        while (i <= s.size())
        {
            if (s[i] == ' ' || s[i] == '\0')
                k--;
            if (k == 0)
                break;
            i++;
        }
        return s.substr(0, i);
    }
};

int main()
{
    Solution s;
    cout << s.truncateSentence("Hello how are you Contestant", 4) << endl;
    return 0;
}