/*************************************************************************
	* File Name: day_mon1.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年12月10日 星期二 00时05分24秒
 ************************************************************************/

#include<stdio.h>
#define MONTHS 12

int main(void)
{
	const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int index;

	for(index = 0; index < MONTHS; index++)
	{
		printf("Month %2d has %2d days.\n", index + 1, days[index]);
	}

	return 0;
}
