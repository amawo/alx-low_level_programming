#include <stdio.h>
#include "main.h"

/**
  * main - print programe name
  * @argv: An array containnig arguments
  * @argc: show number of arguments
  *
  * Return: Always 0 on success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
