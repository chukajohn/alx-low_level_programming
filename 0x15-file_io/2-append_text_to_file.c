#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: file to be appanedded to
 *@text_content: text to be appended
 *Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int n, wr;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);


	fclose(file);
	return (1);

}
