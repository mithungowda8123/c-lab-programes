#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,desc,r1,r2,real,img;
	printf("enter the coefficients of a b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
	{
		printf("Its a linear equation\n");
		return 1;
	}
	desc=b*b-4*a*c;
	if(desc==0)
	{
		printf("Roots are real and equal\n");
		r1=-b/2*a;
		r2=-b/2*a;
		printf("r1=%f, r2=%f",r1,r2);
	}
	else if(desc>0)
	{
		printf("Roots are real and distinct\n");
		r1=(-b+sqrt(desc))/(2*a);
		r2=(-b-sqrt(desc))/(2*a);
		printf("r1=%f, r2=%f",r1,r2);
	}
	else
	{
		printf("roots are imaginary\n");
		real=-b/2*a;
		img=sqrt(-desc)/(2*a);
		printf("r1=%f+i%f,r2=%f-i%f",real,img,real,img);
	}
	return 0;
}
	

