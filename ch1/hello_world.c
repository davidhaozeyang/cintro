#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
	
	write(1, "Hi! My name is David\n", 21);

	return 0;
	
}