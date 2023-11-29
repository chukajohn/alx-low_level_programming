#include "main.h"
/**
 *read_textfile - reads textfile
 *@filename: name of the file
 *@letters: number of char to be printed
 *Return: 0 when filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t wordr, wordw;
	char *duf;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	duf = malloc(sizeof(char) * letters);
	if (duf == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	wordr = read(file_descriptor, duf, letters);
	if (wordr == < 0)
	{
		free(duf);
		return (0);
	}
	wordw = write(STDOUT_FILENO, duf, wordr);
	free(duf);
	if (wordr != wordw)
		return (0);
	return (wordw);
}
