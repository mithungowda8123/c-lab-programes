#include<stdio.h>
int main ()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int temp=0;
	int rev=0;
	while(n!=0)
	{
		int rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	{
		printf("input value is a palindrome number");
	}
	else
	{
		printf("input value is not a palindrome number");
	}
	return 0;
}		
