#include<stdio.h>
int main()
{
  int num1;
  int num2;
  int res,rem;
  
  scanf("%d %d",&num1,&num2);
  res=num1+num2;   
  printf("Result of addition is : %d\n",res);
  rem=res%2;
  
  if(rem==0)
    printf("Result of addition is even");
  else
    printf("Result of addition is odd");
}
