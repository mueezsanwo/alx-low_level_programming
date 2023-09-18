# include "main.h"
/**
 * _strcat - put an array in front other
 * @dest: first array
 * @src: second array
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	while (k < j)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	return (dest);
}
