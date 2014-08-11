#include <stdio.h>

int main(int argc, char *argv[])
{
	int data;
	FILE *fd_in = fopen(argv[1], "r");

	if (fd_in == NULL) {
		fputs("Error: fopen fd_in\n", stderr);
		return 1;
	}

	while ((data = fgetc(fd_in)) != EOF) {
		fputc(data, stdout);
	}

	fclose(fd_in);
	return 0;
}
