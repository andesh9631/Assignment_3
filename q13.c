// 13. Write a program to check whether a given number is
//  divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a%3==0 )
    {
        printf("divisible by three  ");

    }
    else
    {
       if(a%2==0)
         {
            printf("divisible by two");
         }
        else 
          {
            printf("not divisible ");
          }
    }
     
   
        return 0;
}