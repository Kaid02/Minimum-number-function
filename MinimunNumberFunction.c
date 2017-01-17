#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void small();
int main()
{
	small();
	return 0;
}
void small()
{
		int a,b;
		
		printf("Enter the first number : ");
		scanf("%d",&a);
		
		printf("\nEnter the second number : ");
		scanf("%d",&b);
		
		(a<=b)?printf("\n%d is minimum",a):printf("\n%d is minimum",b);
		
	//	printf("%d is minimun number ",small);
		
}		
