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

	file_d = fopen(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
		wr = write(file_d, text_content, n);

		if (wr == -1)
			return (-1);
	}


	close(file_d);

	return (1);

}
