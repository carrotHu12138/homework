/*************************************************************************
	* File Name: praise1.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月17日 星期日 21时48分49秒
 ************************************************************************/

#include<stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];
	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}
