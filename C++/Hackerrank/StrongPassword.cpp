// success
// https://www.hackerrank.com/challenges/strong-password/problem?isFullScreen=true
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

int minimumNumber(int n, string password)
{
    // Return the minimum number of characters to make the password strong
    string special_characters = "!@#$%^&*()-+";
    bool component[4] = {false}; // there are total 4 things to make password strong: digit, lower, upper and special character
    for (char c : password)
    {
        if (c >= '0' && c <= '9')
            component[0] = true;
        else if (c >= 'a' && c <= 'z')
            component[1] = true;
        else if (c >= 'A' && c <= 'Z')
            component[2] = true;
        else if (special_characters.find(c) != string::npos)
            component[3] = true;
    }
    int res = 0;
    for (bool t : component)
    {
        if (t == false)
            res++;
    }
    if (n >= 6)
        return res;
    // n < 6
    int count = 6 - n;
    if (res >= count)
        return res;
    return count;
}

int main()
{
    // Solution v1.0 - Time complexity: O() ~ ms - Memory: mb
    return 0;
}