// success
// https://www.hackerrank.com/challenges/circular-array-rotation/problem?isFullScreen=true
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

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    vector<int> res;
    int size_a = a.size();
    k %= size_a;

    // rotate array by k steps
    reverse(a.begin(), a.begin() + size_a - k);
    reverse(a.begin() + size_a - k, a.end());
    reverse(a.begin(), a.end());

    // get elements for vector res
    for (int x : queries)
        res.push_back(a[x]);

    return res;
}

int main()
{
    vector<int> a = {1, 2, 3};
    int k = 2;
    vector<int> queries = {0, 1, 2};
    vector<int> res = circularArrayRotation(a, k, queries);
    for (int x : res)
        cout << x << ' ';
    return 0;
}