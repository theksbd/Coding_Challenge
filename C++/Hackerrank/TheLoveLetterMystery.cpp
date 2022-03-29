// success
// https://www.hackerrank.com/challenges/the-love-letter-mystery/problem?isFullScreen=true
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

int theLoveLetterMystery(string s)
{
    int res = 0;
    int size = s.size();
    for (int i = 0; i < size / 2; i++)
    {
        int n = s[i] - s[size - i - 1];
        res += n >= 0 ? n : n * -1;
    }
    return res;
}

int main()
{
    cout << theLoveLetterMystery("abcdaeab") << endl;
    return 0;
}