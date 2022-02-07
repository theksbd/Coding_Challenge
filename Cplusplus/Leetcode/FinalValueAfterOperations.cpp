// success
// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
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
    int finalValueAfterOperations(vector<string> &operations)
    {
        int res = 0;
        for (string str : operations)
        {
            if (str == "X++" || str == "++X")
                res++;
            else
                res--;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<string> v = {"++X", "++X", "X++"};
    cout << s.finalValueAfterOperations(v) << endl;
    return 0;
}