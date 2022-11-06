//10. Write a program which takes the cost price 
//and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
  {
	float cp,sp,per,profit;
	printf("ENter two number cp,sp:");
	scanf("%f%f",&cp,&sp);
	profit=sp-cp;
	per=profit/cp*100;
	if(per >0)
	  {
		printf( "profit");
	  }
	  else
	  {
			printf("loss");
	  }
	  return 0;

	
	  
  }
