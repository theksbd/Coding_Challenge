// success
// https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int q;
    cin >> q;
    while (q--)
    {
        int type, x;
        cin >> type >> x;
        switch (type)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            s.erase(x);
            break;
        default:
            s.find(x) != s.end() ? cout << "Yes\n" : cout << "No\n";
            break;
        }
    }
    return 0;
}
