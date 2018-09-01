#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

int main() {
	mode_t file_rw_mode = S_IRUSR | S_IWUSR;
	close(STDOUT_FILENO);
	int fildes = open("hello_world.txt", O_CREAT | O_TRUNC | O_RDWR, file_rw_mode);
	printf("%s\n", "Hello, World!");
	close(fildes);
	return 0;
}