#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
	mode_t file_rw_mode = S_IRUSR | S_IWUSR;
	int fildes = open("hello_world.txt", O_CREAT | O_TRUNC | O_RDWR, file_rw_mode);
	write(fildes, "Hello, World!\n", 14);
	close(fildes);
	return 0;
	
}