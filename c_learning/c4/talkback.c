/*************************************************************************
	* File Name: talkback.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月17日 星期日 21时29分22秒
 ************************************************************************/

#include<string.h>		// 提供strlen()函数的原型
#include<stdio.h>
#define DENSITY 62.4	// 人体的密度(单位：磅／立方英尺)
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What's you fist name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);
	return 0;
}
