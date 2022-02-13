// success
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
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
    // Solution v1.0: Time complexity: O(n) ~ 24ms - Memory: 11.5mb
    // string removeDuplicates(string s)
    // {
    //     if (s.size() == 1)
    //         return s;
    //     string res;
    //     stack<char> st;
    //     int size = s.size();
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (st.empty())
    //             st.push(s[i]);
    //         else
    //             s[i] == st.top() ? st.pop() : st.push(s[i]);
    //     }
    //     while (!st.empty())
    //     {
    //         res += st.top();
    //         st.pop();
    //     }
    //     reverse(res.begin(), res.end());
    //     return res;
    // }

    // Solution v2.0: Time complexity: O(n) ~ 12ms - Memory: 11.1mb
    string removeDuplicates(string s)
    {
        string res;
        for (char c : s)
        {
            if (res.empty())
                res.push_back(c);
            else
                res.back() == c ? res.pop_back() : res.push_back(c);
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.removeDuplicates("abbaczyzddz") << endl;
    return 0;
}