// success
// https://www.codewars.com/kata/5277c8a221e209d3f6000b56/train/cpp
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

// using namespace std;

bool valid_braces(std::string braces)
{
    if (braces.size() % 2 == 1)
        return false;
    std::stack<char> st;
    int i = 0;
    while (braces[i] != '\0')
    {
        if (braces[i] == '{' || braces[i] == '[' || braces[i] == '(')
            st.push(braces[i]);
        else
        {
            if (st.empty() == true)
                return false;
            if ((braces[i] == '}' && st.top() != '{') || (braces[i] == ']' && st.top() != '[') || (braces[i] == ')' && st.top() != '('))
                return false;
            st.pop();
        }
        i++;
    }
    if (st.empty() == false)
        return false;
    return true;
}

int main()
{
    std::cout << valid_braces("([{}])") << '\n';
    return 0;
}