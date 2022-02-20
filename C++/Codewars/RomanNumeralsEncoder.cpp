// success
// https://www.codewars.com/kata/51b62bf6a9c58071c600001b/train/cpp
#include <iostream>
#include <string>

std::string solution(int number)
{
    // convert the number to a roman numeral
    std::string res;
    int roman[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string romanString[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int count = 0;
    int i = 0;
    while (i < 14)
    {
        if (number > 0 && number >= roman[i])
        {
            count = number / roman[i];
            if (count > 0)
            {
                if (count > 3)
                    count = 3;
                number -= roman[i] * count;
                for (int j = 0; j < count; j++)
                    res += romanString[i];
            }
        }
        i++;
    }
    return res;
}

int main()
{
    std::cout << solution(1992) << '\n';
    return 0;
}