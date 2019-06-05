#include<stdio.h>

void func(int p,int q)
{
	printf("%d  %d\n",p,q);
}

int main()
{
	int i=2;
	func(++i,i++);
}

