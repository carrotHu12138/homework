/*************************************************************************
	* File Name: cypher1.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月24日 星期日 22时33分02秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}

	putchar(ch);

	return 0;
}
