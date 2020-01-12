#include<stdio.h>
int main()
{
  int num1 = 10;
  int num2 = 5;
  int res,rem;
  
  res=num1+num2;   
  printf("Result of addition is : %d\n",res);
  rem=res%2;
  
  if(rem==0)
    printf("Result of addition is even");
  else
    printf("Result of addition is odd");
}
