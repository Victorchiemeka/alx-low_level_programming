#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - the structure for the dog data
 * @name: Is the name of the dog
 * @age: Its age
 * @owner: The owner of the dog
 *
 * Description: All these data are for the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
