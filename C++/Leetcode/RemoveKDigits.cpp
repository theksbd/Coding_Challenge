// success
// https://leetcode.com/problems/remove-k-digits/
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
    string removeKdigits(string num, int k)
    {
        if (num.size() == k)
            return "0";
        string res;
        for (int i = 0; i < num.size(); i++)
        {
            while (!res.empty() && res.back() > num[i] && k) // removing all those which digit which are greater than next one
            {
                res.pop_back();
                k--;
            }
            if (!res.empty() || num[i] != '0') // pushing all digit one by one
                res.push_back(num[i]);
        }
        while (k-- > 0 && !res.empty()) // maybe there is no digit such that which satify the condition but we have to remove some digt than we are removing last k digit
            res.pop_back();
        return res.empty() ? "0" : res; // if resulting string contain some thing or not
    }
};

int main()
{
    Solution s;
    cout << s.removeKdigits("112", 1) << endl;
    return 0;
}