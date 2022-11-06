//7. Write a program to check whether roots of a
// given quadratic equation are real &
//distinct, real & equal or imaginary roots

// formula

/*Discriminant: D = b2 - 4ac
D > 0, the roots are real and distinct
D = 0, the roots are real and equal.
D < 0, the roots do not exist or the roots are imaginary
*/
#include<stdio.h>
int main()
{
   int a,b,c,d;
   printf("ENter the three number");
   scanf("%d%d%d",&a,&b,&c);
   d=(b*b)-4*a*c;
   if(d>0)
     printf("D > 0, the roots are real and distinct\n");
  else if(d==0)
              printf("D = 0, the roots are real and equal\n");
           else 
              printf(" D < 0, the roots do not exist or the roots are imaginary\n");
        
        return 0;
   
}