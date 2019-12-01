/*************************************************************************
	* File Name: escape.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月17日 星期日 21时20分32秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	float salary;
	printf("\aEnter your desired montyly salary: ");
	printf("$________\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a monty is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");
	return 0;
}
