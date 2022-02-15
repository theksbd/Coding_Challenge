// success
// https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true
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

long long aVeryBigSum(vector<long long> ar)
{
    long long sum = 0;
    for (long long x : ar)
        sum += x;
    return sum;
}

int main()
{
    vector<long long> v = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    cout << aVeryBigSum(v) << endl;
    return 0;
}