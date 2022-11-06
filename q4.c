//4. Write a program to check whether a given number 
//is an even number or an odd  
//number without using % operator.
#include<stdio.h>
int main()
{
    int x,resl;
    printf("Enter the value of n :");
    scanf("%d",&x);
      resl=x&1;
      if(resl==1)
         printf("odd");
      else
         printf("even");


         return 0;

      
    
}