// success
// https://leetcode.com/problems/complement-of-base-10-integer/
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

using namespace std;

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
            return 1;
        if (n == 1)
            return 0;
        int res = 0;
        queue<int> q;
        while (n > 0) // get the bits binary of n
        {
            q.push(n % 2);
            n /= 2;
        }
        int i = 0;
        while (q.empty() == false)
        {
            int bit = q.front();
            if (bit == 0)
                res += pow(2, i);
            q.pop();
            i++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    int arr[] = {10000000};
    for (int i : arr)
        cout << i << " -> " << s.bitwiseComplement(i) << endl;
    return 0;
}