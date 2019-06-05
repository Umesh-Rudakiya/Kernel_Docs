#include<stdio.h>

int main()
{
	int *ptr;
	printf("------\n");
	{
		int ch;
		ptr = &ch;
	}

	*ptr = 10;

	printf("%d\n",*ptr);
}
