// success
// https://www.codewars.com/kata/550f22f4d758534c1100025a/train/cpp
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

// using namespace std;

class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr)
    {
        std::vector<std::string> res;
        for (std::string s : arr)
        {
            if (res.empty())
                res.push_back(s);
            else
            {
                if (s == "NORTH")
                {
                    if (res.back() != "SOUTH")
                        res.push_back(s);
                    else
                        res.pop_back();
                }
                else if (s == "SOUTH")
                {
                    if (res.back() != "NORTH")
                        res.push_back(s);
                    else
                        res.pop_back();
                }
                else if (s == "WEST")
                {
                    if (res.back() != "EAST")
                        res.push_back(s);
                    else
                        res.pop_back();
                }
                else
                {
                    if (res.back() != "WEST")
                        res.push_back(s);
                    else
                        res.pop_back();
                }
            }
        }
        return res;
    }
};

int main()
{
    std::vector<std::string> v = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
    v = DirReduction::dirReduc(v);
    for (std::string str : v)
        std::cout << str << ' ';
    return 0;
}