// success
// https://leetcode.com/problems/base-7/
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
    string convertToBase7(int num)
    {
        if ((num >= 0 && num <= 6) || (num >= -6 && num < 0))
            return to_string(num);
        stack<int> st;
        long long res = 0;
        bool sign = false; // true if negative
        if (num < 0)
        {
            sign = true;
            num *= -1; // get abs(num) for better calcution
        }
        while (num > 0)
        {
            st.push(num % 7);
            num /= 7;
        }
        while (st.empty() == false)
        {
            res *= 10;
            res += st.top();
            st.pop();
        }
        if (sign)
            res *= -1;
        return to_string(res);
    }
};

int main()
{
    Solution s;
    cout << s.convertToBase7(15) << endl;
    cout << s.convertToBase7(-15) << endl;
    return 0;
}