#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * main - structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: dog with name, age and owner's name
*/
struct dog
{
	char * name
	float age
	char * owner
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif /* DOG_H */
