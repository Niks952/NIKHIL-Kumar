#include<stdio.h>
int input(int *a,int *b)
{
	printf("Enter two no.'s\n");
	scanf("%d%d",a,b);
}
int add(int a,int b)
{
	int z;
	z=a+b;
	return z;
}
void output(int z)
{
	printf("the sum is %d",z);
}
int main()
{
	int m,n,c;
	input(&m,&n);
	c=add(m,n);
	output(c);

}
