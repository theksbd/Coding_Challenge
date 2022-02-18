// success
// https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/cpp
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

bool is_isogram(std::string str)
{
    if (str == "")
        return true;
    std::vector<int> exist(26, 0);
    int size = str.size();
    for (char c : str)
    {
        if (c >= 'A' && c <= 'Z')
            c += 32;
        if (exist[c - 'a'] != 0)
            return false;
        exist[c - 'a']++;
    }
    return true;
}

int main()
{
    std::cout << is_isogram("Dermatoglyphics") << std::endl;
    return 0;
}