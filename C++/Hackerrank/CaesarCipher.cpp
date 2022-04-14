// success
// https://www.hackerrank.com/challenges/caesar-cipher-1/problem?isFullScreen=true
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

string caesarCipher(string s, int k)
{
    for (char &c : s)
    {
        if (isalpha(c))
        {
            char a = isupper(c) ? 'A' : 'a';
            c = a + (c - a + k) % 26;
        }
    }
    return s;
}

int main()
{
    cout << caesarCipher("abcdefghijklmnopqrstuvwxyz", 2) << endl;
    return 0;
}