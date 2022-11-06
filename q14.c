// 14. Write a program to check whether a given number is 
// divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int a;
     printf("Enter the number\n");
    scanf("%d",&a);
    if(a%7==0 )
    {
        printf("divisible by seven ");

    }
    else
    {
       if(a%3==0)
         {
            printf("divisible by three");
         }
        else 
          {
            printf("not divisible ");
          }
    }
     
   
        return 0;
}

