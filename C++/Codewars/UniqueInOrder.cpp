// success
// https://www.codewars.com/kata/54e6533c92449cc251001667/train/cpp
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

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T> &iterable)
{
    //your code here
    std::vector<T> res;
    int size = iterable.size();
    for (int i = 0; i < size; i++)
    {
        if (res.empty())
            res.push_back(iterable[i]);
        else
        {
            if (iterable[i] != res.back())
                res.push_back(iterable[i]);
        }
    }
    return res;
}

std::vector<char> uniqueInOrder(const std::string &iterable)
{
    //your code here
    std::vector<char> res;
    for (char c : iterable)
    {
        if (res.empty())
            res.push_back(c);
        else
        {
            if (c != res.back())
                res.push_back(c);
        }
    }
    return res;
}

int main()
{
    std::vector<int> v1 = {1, 2, 2, 3, 3, 1};
    std::vector<float> v2 = {1.2, 2.0, 2.0, 3.1, 3.1, 3.3, 1.2};
    std::vector<char> v3 = {'a', 'a', 'a', 'c', 'c', 'b', 'b', 'c'};
    std::string s1 = "AAAABBBCCACBB";
    std::string s2 = "AaAABbCCAa";

    for (int x : uniqueInOrder(v1))
        std::cout << x << ' ';
    std::cout << '\n';
    for (float x : uniqueInOrder(v2))
        std::cout << x << ' ';
    std::cout << '\n';
    for (char c : uniqueInOrder(v3))
        std::cout << c << ' ';
    std::cout << '\n';
    for (char c : uniqueInOrder(s1))
        std::cout << c << ' ';
    std::cout << '\n';
    for (char c : uniqueInOrder(s2))
        std::cout << c << ' ';
    return 0;
}