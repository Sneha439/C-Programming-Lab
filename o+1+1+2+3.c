// W.c.p to print the fibonacci series:0+1+1+2+3+5+8..+n

#include<stdio.h>
int main()
{
	int n,a=0,b=1,i=1,c;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		i++;		
	}
	printf("sum of the fibonacci series is:%d",c);
	return 0;
	
}
