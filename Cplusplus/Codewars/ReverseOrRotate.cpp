// success
// https://www.codewars.com/kata/56b5afb4ed1f6d5fb0000991/train/cpp
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

class RevRot
{
public:
    static std::string revRot(const std::string &strng, unsigned int sz)
    {
        if (sz <= 0 || sz > strng.size() || strng == "")
            return "";
        std::string res = "";
        int size = strng.size();
        for (int i = 0; i < size; i += sz)
        {
            std::string s = strng.substr(i, sz);
            if (s.size() != sz)
                break;
            int sumCube = 0;
            int j = 0;
            while (s[j] != '\0')
            {
                int digit = s[j] - 48;
                sumCube += digit * digit * digit;
                j++;
            }
            if (sumCube % 2 == 0)
            {
                int size_s = s.size();
                for (int k = 0; k < size_s / 2; k++)
                {
                    char temp = s[k];
                    s[k] = s[size_s - 1 - k];
                    s[size_s - 1 - k] = temp;
                }
            }
            else
            {
                std::string temp = s.substr(1);
                temp += s[0];
                s = temp;
            }
            res += s;
        }
        return res;
    }
};

int main()
{
    cout << RevRot::revRot("563000655734469485", 4) << endl;
    return 0;
}