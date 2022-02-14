// success
// https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true
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

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    int a_score = 0, b_score = 0;
    int i = 0;
    while (i < 3)
    {
        if (a[i] > b[i])
            a_score++;
        else if (a[i] < b[i])
            b_score++;
        i++;
    }
    return {a_score, b_score};
}

int main()
{
    for (int x : compareTriplets({100, 50, 88}, {78, 65, 92}))
        cout << x << ' ';
    return 0;
}