// success
// https://www.codewars.com/kata/554b4ac871d6813a03000035/train/cpp
#include <iostream>
#include <string>

std::string highAndLow(const std::string &numbers)
{
    //your code here
    int maxVal = -2147483648; // -2^31
    int minVal = 2147483647;  // 2^31 - 1
    int i = 0;
    int start = 0;
    while (i <= numbers.size())
    {
        if (numbers[i] == ' ' || numbers[i] == '\0')
        {
            std::string num = numbers.substr(start, i - start);
            start = i + 1;
            int n = std::stoi(num);
            if (maxVal < n)
                maxVal = n;
            if (minVal > n)
                minVal = n;
        }
        i++;
    }
    return std::to_string(maxVal) + " " + std::to_string(minVal);
}

int main()
{
    std::string s = "9 8 7 11 12 25 101 -5 -7 0 -27 -19 9";
    std::cout << highAndLow(s) << '\n';
    return 0;
}