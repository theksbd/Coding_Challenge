// success
// https://www.codewars.com/kata/53697be005f803751e0015aa/train/cpp
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

std::string encode(const std::string &str)
{
    if (str == "")
        return "";
    std::string temp = str;
    int size = temp.size();
    for (int i = 0; i < size; i++)
    {
        if (temp[i] == 'u' || temp[i] == 'e' || temp[i] == 'o' || temp[i] == 'a' || temp[i] == 'i')
        {
            switch (temp[i])
            {
            case 'u':
                temp[i] = '5';
                break;
            case 'e':
                temp[i] = '2';
                break;
            case 'o':
                temp[i] = '4';
                break;
            case 'a':
                temp[i] = '1';
                break;
            default:
                temp[i] = '3';
                break;
            }
        }
    }
    return temp;
}

std::string decode(const std::string &str)
{
    if (str == "")
        return "";
    std::string temp = str;
    int size = temp.size();
    for (int i = 0; i < size; i++)
    {
        if (temp[i] == '1' || temp[i] == '2' || temp[i] == '3' || temp[i] == '4' || temp[i] == '5')
        {
            switch (temp[i])
            {
            case '5':
                temp[i] = 'u';
                break;
            case '2':
                temp[i] = 'e';
                break;
            case '4':
                temp[i] = 'o';
                break;
            case '1':
                temp[i] = 'a';
                break;
            default:
                temp[i] = 'i';
                break;
            }
        }
    }
    return temp;
}

int main()
{
    std::cout << encode("Hello") << std::endl;
    std::cout << decode("H2ll4") << std::endl;
    return 0;
}