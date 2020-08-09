/*************************************************************************
	* File Name: no_data.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年12月10日 星期二 00时10分45秒
 ************************************************************************/

#include<stdio.h>
#define SIZE 4

int main(void)
{
	int some_data[SIZE] = { 1492, 1066 };
	int i;

	printf("%2s%14s\n", "i", "no_data[i]");
	for(i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, some_data[i]);

	return 0;
}
