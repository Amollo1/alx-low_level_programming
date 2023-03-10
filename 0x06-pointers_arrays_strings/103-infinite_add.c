#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - adds the numbers stored in strings
 * @n1: Contains the first number to be added
 * @n2: Contains the second number to be added
 * @r: This is the buffer to store the result
 * @r_index: This is the current buffer index
 * Return: if r can store the sum - pointer to the result
 *         if r cannot store sum - 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2, n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && r_index < 0)
		return (0);
	return (r + r_index + 1);
}
/**
 * infinite_add - adds two numbers
 * @n1: Contains the first number to be added
 * @n2: Contains the second number to be added
 * @r: This is the buffer to store the result
 * @r_index: This is the current buffer index
 * Return: if r can store the sum - pointer to the result
 *         if r cannot store sum - 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
	       n1_len++;

	for (index = 0; *(n2 + index); index++)
               n2_len++;
	
	if (size_r <= n1_len + 1 || size_r <= n2_lemn +1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r));
}	
