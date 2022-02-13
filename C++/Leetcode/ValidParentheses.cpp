// success
// https://leetcode.com/problems/valid-parentheses/
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

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        if (s.size() % 2 != 0)
            return false;
        stack<char> st;
        int i = 0;
        while (s[i] != '\0')
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
                st.push(s[i]);
            else
            {
                if (st.empty() == true)
                    return false;
                if ((s[i] == '}' && st.top() != '{') || (s[i] == ']' && st.top() != '[') || (s[i] == ')' && st.top() != '('))
                    return false;
                else
                    st.pop();
            }
            i++;
        }
        if (st.empty() == false)
            return false;
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isValid("()") << endl;
    cout << s.isValid("[]{}") << endl;
    cout << s.isValid("{[(())]}") << endl;
    cout << s.isValid("[}") << endl;
    return 0;
    return 0;
}