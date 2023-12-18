#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: null terminated str
 * Return: 1 if successful, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int tf, bw, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	tf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	bw = write(tf, text_content, l);
	if (tf == -1 || bw == -1)
		return (-1);
	close(tf);
	return (1);
}
