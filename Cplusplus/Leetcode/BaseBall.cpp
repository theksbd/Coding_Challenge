// success
// https://leetcode.com/problems/baseball-game/
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
    // Solution v1.0: Time Complexity: O(n) ~ 28ms - Memory: 8.2mb
    // int calPoints(vector<string> &ops)
    // {
    //     int res = 0;
    //     int size = ops.size();
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (ops[i] == "C")
    //         {
    //             res -= stoi(ops[i - 1]);
    //             ops.erase(ops.begin() + i - 1, ops.begin() + i + 1);
    //             size -= 2;
    //             i -= 2;
    //         }
    //         else if (ops[i] == "D")
    //         {
    //             int val = stoi(ops[i - 1]) * 2;
    //             res += val;
    //             ops.erase(ops.begin() + i);
    //             ops.insert(ops.begin() + i, to_string(val));
    //         }
    //         else if (ops[i] == "+")
    //         {
    //             int val = stoi(ops[i - 1]) + stoi(ops[i - 2]);
    //             res += val;
    //             ops.erase(ops.begin() + i);
    //             ops.insert(ops.begin() + i, to_string(val));
    //         }
    //         else
    //             res += stoi(ops[i]);
    //     }
    //     return res;
    // }

    // Solution v2.0: Time Complexity: O(n) ~ 12ms - Memory: 8.4mb
    int calPoints(vector<string> &ops)
    {
        stack<int> st;
        for (string x : ops)
        {
            if (x == "C")
                st.pop();
            else if (x == "D")
                st.push(st.top() * 2);
            else if (x == "+")
            {
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.push(val1);
                st.push(val1 + val2);
            }
            else
                st.push(stoi(x));
        }
        int res = 0;
        while (st.empty() == false)
        {
            res += st.top();
            st.pop();
        }
        return res;
    }
};

int main()
{
    Solution s;
    // vector<string> v = {"5", "2", "C", "D", "+"};
    vector<string> v = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    // vector<string> v = {"1"};
    cout << s.calPoints(v) << endl;
    return 0;
}