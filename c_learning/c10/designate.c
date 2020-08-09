/*************************************************************************
	* File Name: designate.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年12月10日 星期二 00时23分58秒
 ************************************************************************/

#include<stdio.h>
#define MONTHS 12

int main(void)
{
	int days[MONTHS] = {31,28, [4] = 31, 30, 31, [1] = 29};
	int i;

	for(i = 0; i < MONTHS; i++ )
		printf("%2d %d\n", i + 1, days[i]);

	return 0;
}
