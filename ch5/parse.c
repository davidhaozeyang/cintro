#include <stdio.h>                                                                                            
#include <string.h>
#include <stdlib.h>

int main(){
	char* data = "Hello 5 World";
	char hello[6];
	int num;
	char world[6];
	
	int result = sscanf(data, "%s %d %s", hello, &num, world);
	
	printf("Parsed into %d variables.\n", result);
	printf("%s : %d : %s\n", hello, num, world);
	return 0;
	
}
