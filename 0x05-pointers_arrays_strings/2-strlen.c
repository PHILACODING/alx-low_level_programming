#include "main.h"

/**
 * _strlen - return len of a str
 * @s : a pointer starting
 * Return : the len of a str
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
