// success
// https://www.hackerrank.com/challenges/sock-merchant/problem?isFullScreen=true
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

int sockMerchant(int n, vector<int> ar)
{
    int res = 0;
    vector<int> freq(101, 0);
    for (int x : ar)
    {
        freq[x]++;
        if (freq[x] % 2 == 0)
            res++;
    }
    return res;
}

int main()
{
    vector<int> v = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    cout << sockMerchant(v.size(), v) << endl;
    return 0;
}