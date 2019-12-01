/*************************************************************************
	* File Name: pound.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月18日 星期一 00时01分48秒
 ************************************************************************/

#include<stdio.h>

void pound();

int main(void)
{
	int times = 5;
	char ch = '!';
	float f = 6.0f;

	pound(times);
	pound(ch);
	pound((int)f);

	return 0;
}

void pound(int n)
{
	while (n-- > 0) 
		printf("#");
	printf("\n");
}
