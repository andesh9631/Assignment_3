//16. Write a program to check whether a given 
//character is an alphabet (uppercase), an 
//alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{ 
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);

   if(x>='A'&& x<='Z')
     {
          printf("upper case");
     }
   else
     {
         if(x>='a' && x<='z')
           {
               printf("lowercase");

           }
        else
           {
              if(x>=0 && x<=9)
                   {
                       printf("digit");
                   }
              else
                  {
                      printf("special charecter");
                   }
            }
     }
     
     return 0;
}

  

   
