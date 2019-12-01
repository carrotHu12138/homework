/*************************************************************************
	* File Name: typesizes.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月17日 星期日 21时09分14秒
 ************************************************************************/

/* typesizes.c -- print type size*/
#include<stdio.h>
int main(void)
{
	printf("Type int  has size of %zd btyes.\n", sizeof(int));
	printf("Type char  has size of %zd btyes.\n", sizeof(char));
	printf("Type long  has size of %zd btyes.\n", sizeof(long));
	printf("Type long long  has size of %zd btyes.\n", sizeof(long long));
	printf("Type double  has size of %zd btyes.\n", sizeof(double));
	printf("Type long double  has size of %zd btyes.\n", sizeof(long double));
	return 0;
}
