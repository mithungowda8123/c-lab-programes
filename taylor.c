#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
	float x,degree,nume,deno,term,sum=0; int i =0;
	printf("\n Enter the degree value :");
	scanf("%f",&degree);
	
	//convert degree  to radian
	x = (degree * PI)/180.0;
	
	//Make initial steps:
	nume = x;
	deno = 1; 
	i=1;
	
	//start of the loop
	do{
		term = nume / deno;
		sum = sum + term;
		i = i+2;
		nume = -nume * x * x;
		deno = deno * i*(i-1);
	}while(fabs(term) >= 0.0000001);
	
	printf("\nThe calculated sin(%f) value by Taylor Series is = %f",degree,sum);
	printf("\nThe calculated sin(%f) value by built-in function is = %f",degree,sin(x));
	
	return 0;
}
