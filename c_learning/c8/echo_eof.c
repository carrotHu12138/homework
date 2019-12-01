/*************************************************************************
	* File Name: echo_eof.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月24日 星期日 23时36分09秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	int ch;
	while((ch = getchar()) != EOF)  
		putchar(ch);

	return 0;
}
