// success
// https://www.codewars.com/kata/5266876b8f4bf2da9b000362/train/cpp
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
#include <climits>

// using namespace std;

std::string likes(const std::vector<std::string> &names)
{
    std::string res;
    int size = names.size();
    if (size == 0)
        return "no one likes this";
    if (size == 1)
        res += names[0] + " likes this";
    else if (size == 2)
    {
        res += names[0];
        res += " and ";
        res += names[1];
        res += " like this";
    }
    else if (size == 3)
    {
        res += names[0];
        res += ", ";
        res += names[1];
        res += " and ";
        res += names[2];
        res += " like this";
    }
    else
    {
        res += names[0];
        res += ", ";
        res += names[1];
        res += " and ";
        res += std::to_string(size - 2);
        res += " others ";
        res += "like this";
    }
    return res;
}

int main()
{
    std::vector<std::string> names = {"Hoang", "Vo", "Minh"};
    std::cout << likes(names) << std::endl;
    return 0;
}