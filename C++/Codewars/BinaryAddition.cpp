// success
// https://www.codewars.com/kata/551f37452ff852b7bd000139/train/cpp
#include <iostream>
#include <cstdint>
#include <string>

std::string add_binary(uint64_t a, uint64_t b)
{
    std::string res;
    a += b;
    while (a > 0)
    {
        res.insert(0, std::to_string(a % 2));
        a /= 2;
    }
    return res == "" ? "0" : res;
}

int main()
{
    std::cout << add_binary(1, 1) << '\n';
    return 0;
}