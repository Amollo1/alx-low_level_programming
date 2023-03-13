#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: The first string to concat
 * @s2: The second string to concat
 * Return: The concatinated s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i;
	int cd;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = cd = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[cd] != '\0')
		cd++;
	conct = malloc(sizeof(char) * (i + cd + 1));
	if (conct == NULL)
		return (NULL);
	i = cd = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[cd] != '\0')
	{
		conct[i] = s2[cd];
		i++, cd++;
	}
	conct[i] = '\0';
	return (conct);
}
