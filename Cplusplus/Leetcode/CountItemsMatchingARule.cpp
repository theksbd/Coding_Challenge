// success
// https://leetcode.com/problems/count-items-matching-a-rule/
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
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int j = 2;
        if (ruleKey == "type")
            j = 0;
        else if (ruleKey == "color")
            j = 1;
        int res = 0;
        int size = items.size();
        for (int i = 0; i < size; i++)
        {
            if (items[i][j] == ruleValue)
                res++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<vector<string>> v = {{"phone", "blue", "pixel"}, {"computer", "silver", "phone"}, {"phone", "gold", "iphone"}};
    cout << s.countMatches(v, "type", "phone") << endl;
    return 0;
}