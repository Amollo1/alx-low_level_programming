#include "main.h"

/**
 * _isupper - Chech if the letter is upper
 * @y: This is the number to be checked
 * Return: 1 for upper letter, else 0
 */

int _isupper(int y)
{
	if (y >= 65 && y <= 90)
	{
		return (1);
	}
	return (0);
}
