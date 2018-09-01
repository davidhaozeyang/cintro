#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Person{
	char* name;
	int age;
	struct Person** friends;
};

typedef struct Person person_t;

person_t* create(char* name, int age);
void destory(person_t* person);



int main(){
	person_t* p1 = create("Agent Smith", 128);
	person_t* p2 = create("Sonny Moore", 256);
	
	*(p1->friends) = p2;
	*(p2->friends) = p1;
	
	printf("%s is %d years old and is friend with %s.\n", p1->name, p1->age, (*(p1->friends))->name);
	printf("%s is %d years old and is friend with %s.\n", p2->name, p2->age, (*(p2->friends))->name);
	
	destory(p1);
	destory(p2);
	
	return 0;
}

person_t* create(char* name, int age){
	person_t* person = (person_t*)malloc(sizeof(person_t));
	person->name = strdup(name);
	person->age = age;
	(person->friends) = malloc(sizeof(person_t)*10);
	return person;
}

void destory(person_t* person){
	free(person->name);
	free(person->friends);
	
	memset(person, 0, sizeof(person_t));
	free(person);
}

