// success
// https://leetcode.com/problems/plus-one/
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
    vector<int> plusOne(vector<int> &digits)
    {
        int size = digits.size();
        if (digits[size - 1] == 9)
        {
            digits[size - 1] = 0;
            int carry = 1;
            for (int i = size - 2; i >= 0; i--)
            {
                if (carry)
                {
                    digits[i] += carry;
                    carry = digits[i] / 10;
                    digits[i] %= 10;
                }
                else
                    break;
            }
            if (carry)
                digits.insert(digits.begin(), carry);
        }
        else
            digits.back() += 1;
        return digits;
    }
};

int main()
{
    Solution s;
    vector<int> v = {9, 9, 9};
    v = s.plusOne(v);
    for (int x : v)
        cout << x;
    return 0;
}