#include<stdio.h>
int main()
{
	int num1,num2; //declaration of variables
	char op;
	float sum,diff,prod,qut,rem;
	printf("enter the operator\n");
	scanf("%c",&op);  //accepting the inputs
	printf("enter the 2 numbers\n");
	scanf("%d%d",&num1,&num2);
	
	if(op == '+')
	{
		sum=num1+num2;
		printf("sum of 2 numbers = %f",sum);
	}
	else if(op =='-')
	{	
		diff=num1-num2;
		printf("difference of 2 numbers = %f",diff);
	}
	else if(op == '*')
	{
		prod=num1*num2;
		printf("product of 2 numbers is = %f",prod);
	}
	else if(op == '/')
	{
		if(num2 == 0)
		{
			printf("divide by zero error\n");
			return 1;
		}
		
		qut= (float) num1/num2;
		printf("qut of 2 numbers  = %f",qut);
	}
	else if(op == '%')
	{
		if(num2 == 0)
		{
			printf("divide by zero error\n");
			return 1;
		}
		rem=num1%num2;
		printf("reminder is =%f",rem);
	}
	else
	{
		printf("invalid opeartor\n");
	}
   return 0;
}	
	
	
