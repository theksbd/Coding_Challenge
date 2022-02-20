// success
// https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/cpp
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

std::string reverse_words(std::string str)
{
  std::string res = "";
  int size = str.size();
  int countSpaceAtStart = 0; // use to count how many spaces at the beginning of string str
  int start = 0, end = 0;    // start is start index, end is end index to get each word from string str
  bool multi_space = false;  // true if meeting special case that string str has multiple spaces
  int countSpace = 0;        // use to count how many spaces that string str has when multi_space equal to true

  if (str[0] == ' ')
  {
    for (int i = 0; i < size; i++)
    {
      if (str[i] == ' ')
        countSpaceAtStart++;
      else
        break;
    }
    int temp = countSpaceAtStart;
    while (temp-- > 0)
      res += " ";
  }

  for (int i = countSpaceAtStart; i <= size; i++)
  {
    if (str[i] == ' ' && str[i + 1] == ' ')
    {
      multi_space = true;
      countSpace++;
      continue;
    }
    if (str[i] == ' ' || str[i] == '\0')
    {
      // if (i == size && start == size)
      //   break;
      std::string word = str.substr(start, end - start + 1);
      int sizeWord = word.size();
      for (int j = 0; j < sizeWord / 2; j++)
      {
        std::swap(word[j], word[sizeWord - j - 1]);
      }
      res += word;
      if (i < size)
      {
        if (multi_space)
        {
          while (countSpace-- > 0)
            res += " ";
          countSpace = 0;
          multi_space = false;
        }
        res += " ";
      }
      start = i + 1;
    }
    end = i;
  }
  return res;
}

int main()
{
  std::cout << reverse_words(" Do   Thien   Hoang  ") << ";" << std::endl;
  return 0;
}
