//8. Write a program to check whether 
//a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
   if(x%100==0)
   {
      if(x%400==0)
            printf("leap year");
      else
            printf("non leap year");

   }
   else
   {
       if(x%4==0)
                printf("leap year");
        else
                printf("non leap year");
   }
   return 0;
}
                              
    
      


