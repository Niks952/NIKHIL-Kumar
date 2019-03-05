#include<stdio.h>
int input(void)
{

	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	return a;
}
int compute(int x)
{
	x=x+1;
	return x;
}
void output (int m,int n)
{
	printf("%d+1 is %d",m,n);
}
int main (void)
{
	int a= input();
	int b=compute (a);
	output(a,b);
}
