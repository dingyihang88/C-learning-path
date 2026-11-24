#include<stdio.h>
int main()
{
	int x,temp;
	int n=0;
	scanf("%d",&x);
	temp=x;
    while(temp!=0)
  {
  	temp=temp/10;
  	n++;
  }
    printf("%d\n",n);
    temp=x;
    int a[6];
    int o;
    int i;
    int rev=0; 
    for( i=0;i<n;i++)//老版本需要先在外面定义i； 
    {
    	a[i]=temp%10;
    	temp=temp/10;//变成整数，故循环条件如上 
    	 rev=rev*10+a[i];//变量还没初始化，会在每次循环时创建垃圾值 
    	
    	
	}
	for( i=0;i<n;i++)
	{
		if(i<n-1)
		printf("%d,",a[i]);//不要忘记，“”后的， 
		else
		printf("%d\n",a[i]);//不要漏掉f 
	}
	printf("%d",rev);
	return 0;
}
