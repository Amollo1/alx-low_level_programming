#include "main.h"

/**
 * print_chessboard - Our entry point
 * @a: an array
 * Return: Alaways 0
 */

void print_chessboard(char (*a)[8])
{
	int u;
	int v;

	for (u = 0; u < 8; u++)
	{
		for (v = 0; v < 8; v++)
			_putchar([u][v]);
		_putchar('\n');
	}
}
