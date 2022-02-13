// success
// https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/
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
    vector<string> divideString(string s, int k, char fill)
    {
        vector<string> res;
        int size = s.size();
        if (size <= k)
        {
            if (size == k)
                return {s};
            for (int i = 0; i < k - size; i++)
                s += fill;
            return {s};
        }
        int remain = size % k;
        int i = 0;
        while (i < size - remain)
        {
            res.push_back(s.substr(i, k));
            i += k;
        }
        if (remain != 0)
        {
            string str = s.substr(i);
            i = 0;
            while (i < k - remain)
            {
                str += fill;
                i++;
            }
            res.push_back(str);
        }
        return res;
    }
};

int main()
{
    Solution s;
    // string a[] = {"a", "ab", "abc", "abcdefjhk", "abcd", "abcde"};
    string a[] = {"abc"};
    for (string str1 : a)
    {
        vector<string> v = s.divideString(str1, 8, 'x');
        for (string str2 : v)
            cout << str2 << " ";
        cout << '\n';
    }
    return 0;
}