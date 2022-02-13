// success
// https://www.codewars.com/kata/513e08acc600c94f01000001/train/cpp
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

// using namespace std;

class RGBToHex
{
public:
    static std::string converter(int value)
    {
        if (value < 0)
            return "00";
        if (value > 255)
            return "FF";
        std::string res;
        double hex_val = (double)value / 16.0;
        if ((int)hex_val >= 10)
        {
            char c = (int)hex_val + 55;
            res.push_back(c);
        }
        else
            res = std::to_string((int)hex_val);
        hex_val -= (int)hex_val;
        hex_val *= 16.0;
        if (hex_val >= 10)
        {
            char c = hex_val + 55;
            res.push_back(c);
        }
        else
            res += std::to_string((int)hex_val);
        return res;
    }
    static std::string rgb(int r, int g, int b)
    {
        std::string res = converter(r);
        res += converter(g);
        res += converter(b);
        return res;
    }
};

int main()
{
    std::cout << RGBToHex::rgb(-20, 275, 125) << std::endl;
    return 0;
}