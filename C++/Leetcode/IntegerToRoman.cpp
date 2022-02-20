// success
// https://leetcode.com/problems/integer-to-roman/
#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        string res;
        int roman[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romanString[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int count = 0;
        int i = 0;
        while (i < 14)
        {
            if (num > 0 && num >= roman[i])
            {
                count = num / roman[i];
                if (count > 0)
                {
                    if (count > 3)
                        count = 3;
                    num -= roman[i] * count;
                    for (int j = 0; j < count; j++)
                        res += romanString[i];
                }
            }
            i++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.intToRoman(1992) << '\n';
    return 0;
}