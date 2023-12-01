#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void check_to_stat(int stat, int fd, char *filename, char mode)


/**
 *main - function that copies file cont to anothe rfile
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int fd_fro, fd_to;
	char buffer[BUFFER_SIZE];
	int r_byte, w_byte;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

	if (argv[1] != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to.\n");
		exit(97);
	}

	fd_fro = open(agv[1], O_RDONLY);
	check_to_stat(fd_fro, -1, argv[1], 'O');
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_to_stat(fd_to, -1, argv[2], 'w');

	while (r_byte == BUFFER_SIZE)
	{
		r_byte = read(fd_fro, buffer, sizeof(buffer));
		if (r_byte == -1)
			check_to_stat(-1, -1, argv[1], 'O');
		w_byte = write(fd_to, buffer, r_byte);
		if (w_byte == -1)
			check_to_start(-1, -1, argv[2], 'w');
	}
	close(fd_fro);
	check_to_stat(fd_fro, NULL, 'C');
	close(fd_to);
	check_to_stat(fd_to, NULL, 'C');
	return (0);
}


/**
 *check_to_stat - checks if a file can be open or close
 *@stat: file to be opened
 *@filename: name of a file
 *@mode: closing or opening
 *@fd: file descriptor
 *Return: void
 */

void check_to_stat(int stat, int fd, int mode, char *filename)
{,
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == "O" && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'w' && stat - 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

}
