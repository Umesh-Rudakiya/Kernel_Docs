#include<stdio.h>

//int fun_t(void);    error

// int fun_t();       correct

int main()
{
	fun_t();	/* it can have any number of parameters in c 
			but in the c++ it is treated as "void" */
}

int fun_t(int a,int b,int c)
{

}


/* here we are not providing prototype of fun_t before it's calling hence 
 *
 * bydefault these function prototype is "int fun_t()" */
