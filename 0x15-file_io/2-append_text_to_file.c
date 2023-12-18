#include "main.h"

/**
 * append_text_to_file - appends text
 * to the end of file
 * @filename: name of file
 * @text_content: null terminated str
 * Return: 1, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wf, of, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	of = open(filename, O_WRONLY | O_APPEND);
	wf = write(of, text_content, l);

	if (of == -1 || wf == -1)
		return (-1);
	close(of);
	return (1);
}

