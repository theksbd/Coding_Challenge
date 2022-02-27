// success
// https://www.hackerrank.com/challenges/sherlock-and-array/problem?isFullScreen=true&utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign
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

string balancedSums(vector<int> arr)
{
    int s1 = 0;
    for (int x : arr)
        s1 += x;
    int s2 = 0;
    for (int x : arr)
    {
        s1 -= x;
        if (s1 == s2)
            return "YES";
        s2 += x;
    }
    return "NO";
}

int main()
{
    cout << balancedSums({1, 2, 3, 3}) << endl;
    return 0;
}