#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n1,n2;
  printf("enter first and second number:");
  scanf('\n%d%d",&n1,&n2);
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
        printf("after swapping first number is:%d \n second number is:%d", n1,n2);
        return 0;
        }
        
        
  
