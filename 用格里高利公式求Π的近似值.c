#include<stdio.h>
#include<math.h>
int main()
{
	int i,flag;
	float item,pi;
	i=1;
	flag=1;
	item=1.0;
	pi=0;
	while(fabs(item)>=1.0e-6)
	{
		pi+=item;
		flag=-flag;
		i=i+2;
		item=1.0/i*flag;
	}
	pi+=item;pi=4*pi;
	printf("pi=%f\n",pi);
	return 0;
}
 
