// success
// https://www.codewars.com/kata/56541980fa08ab47a0000040/train/cpp
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

// using namespace std;

class Printer
{
public:
    static std::string printerError(const std::string &s)
    {
        std::string res = "";
        int size = s.size();
        int countErrors = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] < 'a' || s[i] > 'm')
                countErrors++;
        }
        res += std::to_string(countErrors);
        res += '/';
        res += std::to_string(size);
        return res;
    }
};

int main()
{
    std::string s[] = {"aaabbbbhaijjjm", "aaaxbbbbyyhwawiwjjjwwm", "kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz"};
    for (int i = 0; i < 3; i++)
        std::cout << Printer::printerError(s[i]) << std::endl;
    return 0;
}