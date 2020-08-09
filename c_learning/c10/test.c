/*************************************************************************
	* File Name: test.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年12月11日 星期三 00时02分19秒
 ************************************************************************/

#include<stdio.h>

#define SIZE 10

int main(void)
{

	int numbers[SIZE];

	//int * ptr = &numbers[0];
	int * ptr = numbers;
	char * c;

	printf("The size of numbers is %zd.\n", sizeof numbers);
	printf("The size of ptr is %zd.\n", sizeof *ptr);
	printf("The size of int is %zd.\n", sizeof c);
}
