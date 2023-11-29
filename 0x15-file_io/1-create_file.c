#include "main.h"
#include <string.h>

/**
 *create_file -  a function that creates a file
 *@filename: name of the file to be created
 *@text_content: text conttent of the file
 *
 *Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	FILE *filep;
	size_t length;

	filep = fopen(filename, "w");
	if (filep == NULL)
		return (-1);
	if (text_content != NULL)
	{
		length = strlen(text_content);
		fwrite(text_content, 1, length, filep);
	}

	fclose(filep);
	return (0);
}
