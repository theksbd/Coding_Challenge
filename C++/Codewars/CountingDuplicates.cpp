// success
// https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/train/cpp
#include <iostream>
#include <cstring>
#include <map>

// using namespace std;

size_t duplicateCount(const char *in)
{
    size_t res = 0;
    std::map<char, size_t> freq;
    for (size_t i = 0; in[i] != '\0'; i++)
    {
        char c = in[i];
        if (c >= 'A' && c <= 'Z')
            c += 32;
        if (freq.find(c) != freq.end())
        {
            freq[c]++;
            if (freq[c] == 2)
                res++;
        }
        freq.insert(std::pair<char, int>(c, 1));
    }
    return res;
}

int main()
{
    const char *s = "Indivisibility";
    std::cout << duplicateCount(s) << '\n';
    return 0;
}