#include <stdio.h>
/**
* main - Entry point
* Description: prints the alphabet in lowercase, followed by a new line
* Return: 0
*/
int main(void)
{
	char ch('\n');
	for (ch = 'a'; ch <= 'z'; ch++)	
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
