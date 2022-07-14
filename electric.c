#include<stdio.h>
#include<string.h>
int main()
{
	int unit,charge,total;
	char name[20];
	printf("enter the name\n");
	printf("enter the units consumed\n");
	scanf("%s",name);
	scanf("%d",&unit);
	if (unit>0&&unit<=200)
	{	
		charge=unit*0.8;
	}
	else if(unit>=200&&unit<=300)
	{
		charge=200*0.8+(unit-200)*0.9;
	}
	else if (unit>300)
	{
		charge=200*0.8+100*0.9+(unit-300)*1;
	}
	else
	{
		printf("invalidunit");
		return 1;
	}
	total=charge+100;
	if(total>400)
	{
		total=total+(total*0.15);
	}
	printf("the total amount is %d\n",total);
	printf("name of the consumer %s\n",name);
	return 0;
}
