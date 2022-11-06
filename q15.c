// 15. Write a program to check whether a given number is
//  positive, negative or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the numbre\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("positive");
    }
    else if(a==0)
          {
             printf("zero");
          }
    
    else
    {
        if(a<0)
         {
            printf("negative ");
         }
    }
    return 0;
}
