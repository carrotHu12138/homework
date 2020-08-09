/*************************************************************************
	* File Name: loccheck.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年12月08日 星期日 22时42分05秒
 ************************************************************************/

#include<stdio.h>

void mikado(int);

int main(void)
{
	int pooh = 2, bah = 5;

	printf("In main(), pooh = %d and &pooh = %p\n", pooh , &pooh);
	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
	mikado(pooh);
	
	return 0;
}

void mikado(int bah)
{
	int pooh = 10;

	printf("In mikado(), pooh = %d and &pooh = %p\n", pooh , &pooh);
	printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}
