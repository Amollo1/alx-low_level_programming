#include "main.h"

/**
 * rot13 - Encoder
 * @x: Pointer to string parameter
 * Return: *x
 */

char *rot13(char *x)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (x[i] == data1[j])
			{
				x[i] = datarot[j];
				break;
			}
		}
	}
	return (x);
}
