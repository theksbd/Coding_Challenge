// success
// https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true
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
#include <climits>

using namespace std;

int simpleArraySum(vector<int> ar)
{
    int sum = 0;
    for (int x : ar)
        sum += x;
    return sum;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 10, 11};
    cout << simpleArraySum(v) << endl;
    return 0;
}