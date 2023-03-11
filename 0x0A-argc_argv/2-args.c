#include <stdio.h>
#include "main.h"

/**
 * main - outputs all arguments recived
 * @argc: Number of aruments
 * @argv: Array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
