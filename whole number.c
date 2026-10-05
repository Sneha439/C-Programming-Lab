//w.c.p to find a sum of a digits of a whole  number
#include<stdio.h>
int main()
{
	int n,sum=0,digit;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		digit=(n%10);
		sum=sum+digit;
		n/=10;
	}
	printf("sum of the digit is=%d",sum);
	return 0;
}
