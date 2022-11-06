//5. Write a program to check whether a given number is a 
//three-digit number or not.
#include<stdio.h>
int main()
{
     int x,count=0;
    printf("Enter the value of n:");
    scanf("%d",&x);
      if(x/10!=0)
        {
            count++;
            x/=10;
            if(x!=0)
              {
                 count++;
                  x/=10;

                     if(x!=0)
                         {
                              count++;
                               
                         }
              }
        }
        
   printf("count%d",count);
   return 0;

 
 
 
 
 
 
  //  use loop
//   while(x)
// {
//        if(x!=0)
          
//             count++;
//             x/=10;
//  }
//     printf("count%d",count);
 


}
