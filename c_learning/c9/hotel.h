/*************************************************************************
	* File Name: hotel.h
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年12月08日 星期日 22时27分09秒
 ************************************************************************/
#define QUIT		5
#define HOTEL1		180.00
#define HOTEL2		225.00
#define HOTEL3		255.00
#define HOTEL4		355.00
#define DISCOUNT	0.95
#define STARS		"**************************"

int menu(void);

int getnights(void);

void showprice(double rate, int nights);
