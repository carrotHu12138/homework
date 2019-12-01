/*************************************************************************
	* File Name: echo.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月24日 星期日 23时18分58秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	char ch;

	while((ch = getchar()) != '#')
		putchar(ch);

	return 0;
}
