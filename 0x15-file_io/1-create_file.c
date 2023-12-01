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
	int filed, wr;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(filed, text_content, len);

	if (filed == -1 || wr == -1)
	return (-1);

	close(filed);

	return (1);
}
