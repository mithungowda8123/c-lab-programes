#include<stdio.h>
#include<math.h>
int main()
{
	float x,degree,nume,deno,sum,term;
	int i;
	printf("enter the value of degree\n");
	scanf("%f",&degree);
	x=degree*(3.14/180);
	nume=x;
	deno=1.0;
	sum=0;
	i=1;
	do
	{
		term=nume/deno;
		sum=sum+term;
		i=i+2;
		nume=-nume*(x*x);
		deno=deno*i*(i-1);
	}while(fabs(term)>0.00001);
	printf("The sin(%f) is %f using Taylor series\n",degree,sum);
	printf("The sin(%f) is %f using built in function\n",degree,sin(x));
	return 0;
}
		
