#include<iostream>
using namespace std;

int digSum(int n)
{
  int a = 0;

  while(n > 0 || a > 9)
  {
    if(n == 0)
    {
      n = a;
      a = 0;
    }
    a += n % 10;
    n/= 10;
  }
  return a;
}

int main()
{
    int n = 1234;
    cout << digSum(n);
    return 0;
}
