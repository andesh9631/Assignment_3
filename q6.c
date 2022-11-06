//6. Write a program to print greater between
// two numbers. Print one number of both are
//the same.    
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    if(a>b)
       printf("\ngreater number is %d ",a);
    else if(b>a)
         printf("\ngreater number is %d ",b);
        
        else 
           printf("greater number is %d ",a);

           return 0;
           

}