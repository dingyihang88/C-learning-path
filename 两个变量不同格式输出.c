#include<stdio.h> 

int main()
{
	int a,b;
	a=12;
	scanf("%d",&b);
	printf("a=%d,b=%d\n",a,b);
	printf("a=%6d,b=%6d\n",a,b);
	printf("a=%1d,b=%1d\n",a,b);
	printf("a=%-6d,b=%-6d\n",a,b);
	printf("a=%-1d,b=%-1d\n",a,b);
	printf("a=%d,b=%u\n",a,b);
	return 0;
}
