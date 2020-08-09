/*************************************************************************
	* File Name: zippo1.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年12月12日 星期四 23时57分31秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	int zippo[4][2] = {
		{2,4},
		{6,8},
		{1,3},
		{5,7}
	};

	int **pp2;
	int * p1;
	const int n = 13;
	pp2 = &p1;

	*pp2 = &n;

	**pp2 = 18;

	*p1 = 10;

	printf("n = %d\n", n);

	int * p2 = &n;
	*p2 = 13;

	printf("n = %d\n", n);

	//printf("zippo[0][0] = %d\n", zippo[0][0]);

	//int[] * p1 = zippo;
	//int * p2 = zippo[0];
//	printf("*p1 = %d\n", *p1);
	//printf("*p2 = %d\n", *p2);
	//int * p1, p2;
	//printf("*p1 = %d\n", *p1);

	double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.15};
	const double locked[5] = {0.08, 0.075, 0.0725, 0.07};

	const double * pnc = rates;
	pnc = locked;
	//*pnc = 0.21;
	printf("locked[0] = %.1f\n", locked[0]);
	pnc = &rates[3];
}
