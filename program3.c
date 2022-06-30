#include<stdio.h>
int main()
{
	char name[50];
	float units,charge,total;
	printf("enter the name\n");
	scanf("%s",name);
	//gets(name);
	printf("enter the no of units consumed\n");
	scanf("%f",&units);
	if(units>=0 && units<=200)
	{
		charge=0.8*units;
	}
	else if(units>200 && units<=300)
	{
		charge=(0.8*200)+(units-200)*0.9;
	}
	else
	{
		charge=(0.8*200)+(100*0.9)+(units-300)*1;
	}
	total=charge+100;
	if(total>400)
	{
		total=total+(0.15*total);
	}
	printf(" Name of the User is %s\n", name);
	printf("total Charge is %f\n",total);
	return 0;
}
