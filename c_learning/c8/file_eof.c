/*************************************************************************
	* File Name: file_eof.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月24日 星期日 23时54分31秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ch;
	FILE * fp;
	char fname[50];

	printf("Enter the name of the file: ");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fp == NULL)
	{
		printf("Fialed to open file. Byt!\n");
		exit(0);
	}

	while((ch = getc(fp)) != EOF)
		putchar(ch);

	fclose(fp);

	return 0;

		
}
