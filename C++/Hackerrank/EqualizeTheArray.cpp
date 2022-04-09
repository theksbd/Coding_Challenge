// success
// https://www.hackerrank.com/challenges/equality-in-a-array/problem?isFullScreen=true
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

int equalizeArray(vector<int> arr)
{
    int res = 0;
    map<int, int> freq;
    int maxFreq = 0, maxFreqVal = 0;
    for (int x : arr)
    {
        freq[x]++;
        maxFreq = max(maxFreq, freq[x]);
        if (maxFreq == freq[x])
            maxFreqVal = x;
    }
    for (pair<int, int> p : freq)
    {
        if (p.second == maxFreq && p.first == maxFreqVal)
            continue;
        res += p.second;
    }
    return res;
}

int main()
{
    cout << equalizeArray({2, 2, 1, 1, 3}) << endl;
    return 0;
}