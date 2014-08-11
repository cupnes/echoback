#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int data;
	char buf;
	
	int fd_in = open(argv[1], O_RDONLY);

	if (fd_in < 0) {
		fputs("Error: fopen fd_in\n", stderr);
		return 1;
	}

	while ((data = fgetc(fd_in)) != EOF) {
		read(fd_in, (void *)(&buf), (size_t)1);
		
		fputc(data, stdout);
	}

	close(fd_in);
	return 0;

	return 0;
}
