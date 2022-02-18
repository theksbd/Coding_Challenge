// success
// https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    int val;
    for (int i = 0; i < q; i++)
    {
        cin >> val;
        vector<int>::iterator index = lower_bound(v.begin(), v.end(), val);
        if (*index == val)
            cout << "Yes ";
        else
            cout << "No ";
        cout << index - v.begin() + 1 << '\n';
    }
    return 0;
}