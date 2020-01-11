#include<stdio.h>
int main()
{
  int num1 = 10;
  int num2 = 5;
  int res;
  
  res=num1+num2;
  printf("Result of addition is : %d\n",res);
  
  if(res%2==0)
    printf("Result is even");
  else
    printf("Result is odd");
  
}
