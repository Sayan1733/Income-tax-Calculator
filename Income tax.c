#include <stdio.h>

int main()
{
	int a,t;
	printf("Enter The Income Amount:");
	scanf("%d",&a);
	
	if(a<=300000)
	{
		printf("There Will be no tax");
	}
	else if(a>300000 && a<=600000)
	{
		t=(a-300000)*0.05;
		printf("The tax amount to be paid:%d",t);
	}
	else if(a>600000 && a<=900000)
	{
		
		t=15000+(a-600000)*0.1;
		printf("The tax amount to be paid:%d",t);
	}
	else
	{
		t=45000+(a-900000)*0.15;
		printf("The tax amount to be paid:%d",t);
	}
	return 0;
}
