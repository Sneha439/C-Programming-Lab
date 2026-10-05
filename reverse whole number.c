//w.c.p to reverse the digit of a whole number

#include<stdio.h>
int main()
{
	int n,r,s=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	printf("the reverse of the number is=%d",s);
	return 0;
}
