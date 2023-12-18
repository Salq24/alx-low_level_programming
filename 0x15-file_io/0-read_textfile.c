#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX std output
 * @letters: nuim of letters
 * @filename: name of file
 * Return: actual num of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t tf;
	ssize_t bw;
	ssize_t br;
	char *buffr;

	tf = open(filename, O_RDONLY);

	if (tf == -1)
		return (0);

	buffr = malloc(sizeof(char) * letters);
	br = read(tf, buffr, letters);
	bw = write(STDOUT_FILENO, buffr, br);

	free(buffr);
	close(tf);
	return (bw);
}

