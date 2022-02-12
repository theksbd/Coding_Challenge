// success
// https://leetcode.com/problems/shuffle-string/
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
    string restoreString(string s, vector<int> &indices)
    {
        string res = s;
        int size = s.size();
        for (int i = 0; i < size; i++)
            res[indices[i]] = s[i];
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v = {4, 5, 6, 7, 0, 2, 1, 3};
    cout << s.restoreString("codeleet", v) << endl;
    return 0;
}