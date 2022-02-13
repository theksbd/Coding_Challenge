// success
// https://www.codewars.com/kata/59c633e7dcc4053512000073/train/cpp
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

int solve(const std::string &s)
{
    int res = 0;
    int start = 0;
    int size_s = s.size();
    for (int i = 0; i <= size_s; i++)
    {
        if (s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i' || s[i] == '\0')
        {
            if (i == 0 || s[i - 1] == 'u' || s[i - 1] == 'e' || s[i - 1] == 'o' || s[i - 1] == 'a' || s[i - 1] == 'i')
            {
                start++;
                continue;
            }
            std::string temp = s.substr(start, i - start);
            start = i + 1;
            int size = temp.size();
            if (size == 1)
                res = ((temp[0] - 96) > res) ? temp[0] - 96 : res;
            else
            {
                int sum = 0;
                for (int j = 0; j < size; j++)
                    sum += temp[j] - 96;
                res = sum > res ? sum : res;
            }
        }
    }
    return res;
}

int main()
{
    cout << solve("aaazxcvbnm") << endl;
    cout << solve("zodiac") << endl;
    cout << solve("strength") << endl;
    cout << solve("catchphrase") << endl;
    return 0;
}