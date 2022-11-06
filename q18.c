//18. Write a program which takes the month number as
// an input and display number of days in that month
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a==1)
      {
        printf(" 31 day in this months");
      }
    else 
      {
         if(a==2)
           {
              printf(" 28 day in this months\n");
               printf(" 29 day in this months in case leap years");
           }
        else 
          {
          if(a==3)
            {
              printf(" 30 day in this months");
               }
          else
          {
             if(a==4)
      {
        printf(" 31 day in this months");
      }
          }
          }
      }
      return 0;
}