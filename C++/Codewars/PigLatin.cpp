// success
// https://www.codewars.com/kata/520b9d2ad5c005041100000f/train/cpp
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

std::string pig_it(std::string str)
{
    // Code here
    std::string res;
    std::string tail = "ay";
    int start = 0;
    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            std::string word = str.substr(start, i - start);
            if (start != 0)
                res += ' ';
            if ((word[0] >= 'A' && word[0] <= 'Z') || (word[0] >= 'a' && word[0] <= 'z')) // check that word only contains english letters
            {
                res += word.substr(1) + word[0] + tail;
            }
            else // this word contains symbol, so we'll leave it untouched
                res += word;
            start = i + 1;
        }
    }
    return res;
}

int main()
{
    std::cout << pig_it("Pig language is cool !!!") << '\n';
    return 0;
}