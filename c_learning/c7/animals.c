/*************************************************************************
	* File Name: animals.c
	* Author: carrot
	* Mail: vector.2012.10@gmail.com
	* Created Time: 2019年11月24日 星期日 22时53分11秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;

	printf("Give me a letter of the alphabet, and I will give ");
	printf("an animal name\nbegining with that letter.\n");
	printf("Please type in a letter: type # to end my act.\n");
	while((ch = getchar()) != '#')
	{
		if ( '\n' == ch)
			continue;
		if (1)
			switch(ch)
			{
				case 'a':
				case 'A':
					printf("argali, a wild sheep of Asia\n");
					break;
				case 'b':
					printf("babirusa, a wild pig of Malay\n");
					break;
				case 'c':
					printf("coati, racoonlike mammal\n");
					break;
				case 'd':
					printf("desman, aquatic, molelike critter\n");
					break;
				case 'e':
					printf("echidna, the spiny anteater\n");
					break;
				case 'f':
					printf("fisher, brownish merten\n");
					break;
				default:
					printf("That's a stumper!\n'");
					break;
				
			}
		else
			printf("I recongize only lowercase letters.\n");
		while(getchar() != '\n')
			continue;
		printf("Please type another letter or a #.\n");
	
	}
	printf("Bye!\n");

	return 0;
}
