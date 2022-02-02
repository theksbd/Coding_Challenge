// success
// https://leetcode.com/problems/count-of-matches-in-tournament/
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
    int numberOfMatches(int n)
    {
        int res = 0;
        while (n > 1)
        {
            res += n / 2;
            n = n % 2 == 0 ? n / 2 : n / 2 + 1;
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.numberOfMatches(5) << endl;
    return 0;
}