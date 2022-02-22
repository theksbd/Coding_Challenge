// success
// https://www.hackerrank.com/challenges/missing-numbers/problem?isFullScreen=true
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

vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    vector<int> res;
    map<int, int> freq;
    for (int x : brr)
        freq[x]++;
    for (int x : arr)
        freq[x]--;
    for (auto it : freq)
    {
        if (it.second != 0)
            res.push_back(it.first);
    }
    return res;
}

int main()
{
    for (int x : missingNumbers({203, 204, 205, 206, 207, 208, 203, 204, 205, 206}, {203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204}))
        cout << x << ' ';
    return 0;
}