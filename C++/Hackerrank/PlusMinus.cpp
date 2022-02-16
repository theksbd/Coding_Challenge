// success
// https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true
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

void plusMinus(vector<int> arr)
{
    double size = arr.size();
    double countNegative = 0.0, countZero = 0.0, countPositive = 0.0;
    for (int x : arr)
    {
        if (x < 0)
            countNegative++;
        else if (x > 0)
            countPositive++;
        else
            countZero++;
    }
    cout << setprecision(6) << fixed;
    cout << countPositive / size << endl;
    cout << countNegative / size << endl;
    cout << countZero / size << endl;
}

int main()
{
    plusMinus({1, 1, 0, -1, -1});
    return 0;
}