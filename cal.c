//program to stimulate a simple calculator
#include<stdio.h>

int main()
{
	int num1,num2,sum;
	char op;
	printf("enter an arithematic operator");
	scanf("%c",&op);
	printf("enter two numbers:");
	scanf("%d%d",&num1,&num2);
	if(op=='+')
	{	
		sum=num1+num2;
	}
	else if(op=='-')
	{	
		sum=num1-num2;
	}
	
	
	
	else if(op=='/')
	{	
		if(num2==0)
		{
			printf("divide by zero error\n");
		}
		else
		{
			sum=num1/num2;
		}
	}
	
	else if(op=='*')
	{	
		sum=num1*num2;
	}
	else if(op=='%')
	{	
		sum=num1%num2;
	}
	printf("%d %c %d = %d",num1,op,num2,sum);%
	return 0;
}

