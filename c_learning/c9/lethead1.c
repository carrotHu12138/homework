/*************************************************************************
	* File Name: lethead1.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月27日 星期三 00时17分18秒
 ************************************************************************/

#include<stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);

int main(void)
{

	starbar();
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar();

	return 0;
}

void starbar(void)
{
	int count;
	
	for(count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}
