#include "main.h"

/**
 * _strcpy - Copy variable content
 * @dest: desitnation
 * @src: This is src
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
