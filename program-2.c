#include<iostream>
using namespace std;

void digSum(int n)
{
  int arr[MAX];
  int i = 0;
  int j, r;

  while (n != 0){
  
      r = n % 10;
      arr[i] = r;
      i++;
      n = n/10;
  }

  for (j = i-1; j > -1; j--){
    printf("%d", arr[j]);
  }
}

int main()
{
  int n = 3452897;

  digSum(N);
  return 0;
}
