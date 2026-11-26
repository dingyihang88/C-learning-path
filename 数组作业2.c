#include <stdio.h>
int main()
{

   char b[7]={"67da12"};
   int i=0,s=0;
   for(i=0;b[i]>='0'&&b[i]<='9';i+=2)	
   s=10*s+b[i]-'0';
   printf("%d\n",s);
   return 0;
}
