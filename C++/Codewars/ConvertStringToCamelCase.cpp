// success
// https://www.codewars.com/kata/517abf86da9663f1d2000003/train/cpp
#include <iostream>
#include <string>

std::string to_camel_case(std::string text)
{
    // TODO: Your code goes here!
    std::string res;
    int start = 0;
    for (int i = 0; i <= text.size(); i++)
    {
        if (text[i] == '-' || text[i] == '_' || text[i] == '\0')
        {
            std::string word = text.substr(start, i - start);
            if (start != 0)
            {
                if (word[0] >= 'a' && word[0] <= 'z')
                    word[0] -= 32;
            }
            res += word;
            start = i + 1;
        }
    }
    return res;
}

int main()
{
    std::cout << to_camel_case("the_stealth_warrior") << std::endl;
    return 0;
}