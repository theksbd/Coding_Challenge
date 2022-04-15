// success
// https://www.hackerrank.com/challenges/gem-stones/problem?isFullScreen=true
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

int gemstones(vector<string> arr)
{
    int res = 0;
    vector<int> freq(26, 0);
    for (string s : arr)
    {
        vector<bool> isTraversed(26, false);
        for (char c : s)
        {
            int val = c - 'a';
            if (!isTraversed[val])
                freq[c - 'a']++;
            isTraversed[c - 'a'] = true;
        }
    }
    size_t size = arr.size();
    for (int x : freq)
    {
        if (x == size)
            res++;
    }
    return res;
}

int main()
{
    cout << gemstones({"abcdde", "baccd", "eeabg"}) << endl;
    return 0;
}