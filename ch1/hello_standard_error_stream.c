#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void write_triangle(int n){
	int i;
	for(i = 1; i <= n; i++){
		int j;
		for(j=0; j < i; j++){
			write(STDERR_FILENO, "*", 1);
		}
		write(STDERR_FILENO, "\n", 1);
	}
}

int main() {
	write_triangle(10);
	return 0;
	
}
