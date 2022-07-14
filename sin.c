//program to compute taylor series
#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main ()
{
	float deg,x,nume,deno,sum,term;
	int i;
	printf("enter degree");
	scanf("%f",&deg);
	//convert degree to radians    
	x=deg*(PI/180.0);
	nume=x;
	deno=1;
	sum=0;
	do
	{	
		term=nume/deno;
		sum=sum+term;
		nume=-nume*x*x;
		i=i+2;
		deno= deno*i*(i-1);
	} while (fabs(term)>=0.00001);
	printf("computed value of sin(%.2f)=%f\n",deg,sum);
	printf("value obtained from builtin function:sin(%.2f)=%.2fin",deg,sin 		(x));
	return 0;
} 
