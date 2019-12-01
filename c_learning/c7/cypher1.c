/*************************************************************************
	* File Name: cypher1.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月24日 星期日 22时33分02秒
 ************************************************************************/

#include<stdio.h>
#define SPACE ' '
int main(void)
{
	char ch;

	ch = getchar();
	while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
		ch = getchar();
	}
	putchar(ch);

	return 0;
}
