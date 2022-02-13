// success
// https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true
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

string timeConversion(string s)
{
    string res = s.substr(0, 8);
    string h = s.substr(0, 2);
    string type = s.substr(8);
    if (type == "AM")
    {
        if (h == "12")
            res[0] = res[1] = '0';
    }
    else // PM
    {
        if (h != "12")
        {
            h[0] += 1;
            h[1] += 2;
            res[0] = h[0];
            res[1] = h[1];
        }
    }
    return res;
}

int main()
{
    cout << timeConversion("07:49:32PM") << endl;
    return 0;
}