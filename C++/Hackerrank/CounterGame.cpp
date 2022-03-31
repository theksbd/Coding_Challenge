// success
// https://www.hackerrank.com/challenges/counter-game/problem?isFullScreen=true
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

int setBits(long n)
{
    int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}

string counterGame(long n)
{
    if (n == 1)
        return "Richard";
    return (setBits(n - 1) & 1) ? "Louise" : "Richard";
}

int main()
{
    cout << counterGame(6) << endl;
    return 0;
}