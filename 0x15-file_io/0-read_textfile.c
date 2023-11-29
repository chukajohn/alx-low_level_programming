#include "main.h"
/**
 *read_textfile - reads textfile
 *@filename: name of the file
 *@letters: number of char to be printed
 *Return: 0 when filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	char buffer[BUF_SIZE];
	ssize_t total = 0;
	ssize_t bytes_read;

	while (letters > 0 && (bytes_read = fread(buffer, sizeof(char), BUF_SIZE, file)) > 0)
	{
		if (bytes_read > letters)
	{
		bytes_read = letters;
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written != bytes_read)
	{
		fclose(file);
		return (0);
	}
	total += bytes_written;
		letters -= bytes_written;
	}
	fclose(file);
	return (total);
}
