/*************************************************************************
	* File Name: order.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年12月12日 星期四 22时48分41秒
 ************************************************************************/

#include<stdio.h>

int data[2] = {100, 200};
int moredata[2] = {300, 400};
int main(void)
{
	int * p1, * p2, * p3;

	p1 = p2 = data;
	p3 = moredata;

	//printf(" *p1 = %d, *p2 = %d,	*p3 = %d\n", *p1, *p2 , *p3);
	//printf("*p1++ = %d, *++p2 = %d,	(*p3)++ = %d\n", *p1++, *++p2 , (*p3)++);
	//printf(" *p1 = %d, *p2 = %d,	*p3 = %d\n", *p1, *p2 , *p3);
	
	printf("*(p1++) = %d\n", *(p1++));
	printf("*p2++ = %d\n", *p2++);

	return 0;


}
