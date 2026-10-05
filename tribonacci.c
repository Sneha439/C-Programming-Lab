//w.c.p to print a tribonacci digit 

#include<stdio.h>
int main()
{
	int n,d,a=0,b=0,c=1,i=1;
	printf("enter the number of the term:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
	   i++;
	}
	return 0;
}
