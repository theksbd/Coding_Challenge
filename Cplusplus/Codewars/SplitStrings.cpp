// https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp
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

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> res;
    std::string temp = s;
    int size = temp.size();
    if (size % 2 != 0)
        temp += "_";
    for (int i = 0; i < size; i += 2)
    {
        res.push_back(temp.substr(i, 2));
    }

    return res;
}

int main()
{
    std::vector<std::string> v = solution("abcdf");
    for (std::string s : v)
        std::cout << s << std::endl;
    return 0;
}