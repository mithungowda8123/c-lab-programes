#include<stdio.h>
#include<math.h>
int main(){

	float a,b,c,d,rpart,ipart,root1,root2;
	printf("Enter the coefficient values a,b,c :");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a==0){
		printf("It's a linear equation..Enter a non zero value for a");
		return 0;
	}
	d = (b*b) - (4*a*c);
	
	if(d==0){
		printf("Roors are real and Equal");
		root1 = root2 = -b/(2*a);
		printf("Root1 = %f   Root2 = %f",root1,root1);
	}
	
	else if(d>0){
		printf("Roors are Real and Unequal");
		root1 = (-b + sqrt(d)) / (2*a);
		root2 = (-b - sqrt(d)) / (2*a);
		printf("Root1 = %f   Root2 = %f",root1,root2);
	
		}
	else{
		printf("Roors are Imaginary and Unequal");
		rpart = -b/(2*a);
		ipart = sqrt(-d)/(2*a);
		printf("Root1 = %f + i %f",rpart,ipart);
		printf("Root2 = %f - i %f",rpart,ipart);
	}

	return 0;
}
