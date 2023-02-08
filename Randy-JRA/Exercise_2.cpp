//challenge 2 is to print all odd numbers less than 100

#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 1)
    {
      cout << i << " ";
    }
  }

  return 0;
}
