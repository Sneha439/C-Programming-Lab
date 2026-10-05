//w.c.p to count the digits of a whole number

#include<stdio.h>
int main()
{
	int n,c=0,d;
	printf("enter the whole number:");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		c++;
		n=n/10;
   }
   printf("the count of digits is=%d",c);
	return 0;
}
