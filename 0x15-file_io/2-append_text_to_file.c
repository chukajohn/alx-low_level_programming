#include "main.h"


/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: file to be appanedded to
 *@text_content: text to be appended
 *Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int n, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}

	file_d = open(filename, O_WRONLY | O_APPEND);
	wr = write(file_d, text_content, n);

	if (file_d == -1 || wr == -1)
		return (-1);


	close(file_d);

	return (1);

}
