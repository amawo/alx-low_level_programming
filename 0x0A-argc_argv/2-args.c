#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: shows the number of arguments
 * @argv: an array that containe arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)

	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
