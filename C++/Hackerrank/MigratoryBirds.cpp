// success
// https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true
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

int migratoryBirds(vector<int> arr)
{
    vector<int> freq(6, 0);
    for (int x : arr)
        freq[x]++;
    int res = 0;
    int maxVal = freq[0];
    for (int i = 1; i < 6; i++)
    {
        if (maxVal < freq[i])
        {
            maxVal = freq[i];
            res = i;
        }
    }
    return res;
}

int main()
{
    vector<int> v1 = {1, 4, 4, 4, 5, 3};
    vector<int> v2 = {1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4};
    cout << migratoryBirds(v1) << endl;
    cout << migratoryBirds(v2) << endl;
    return 0;
}