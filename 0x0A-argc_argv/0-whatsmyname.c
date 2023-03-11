#include <stdio.h>
#include "main.h"

/**
 * main - Ouputrs programe name
 * @argc: Nummber of arguments
 * @argv: Array of arguments
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
