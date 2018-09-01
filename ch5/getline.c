#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc < 2){
		return 0;
	}
	FILE* file = fopen(argv[1], "r");
	
	char* buffer = NULL;
	size_t capacity = 0;
	ssize_t result = 0;
	
	while((result = getline(&buffer, &capacity, file))>0) {
		if(buffer[result-1] == '\n'){
			buffer[result-1] = 0;
		}
		
		printf("%d: %s\n", (int)result, buffer);
		buffer = NULL;
		free(buffer);
	}
	return 0;
}