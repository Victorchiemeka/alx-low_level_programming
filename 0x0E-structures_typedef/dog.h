#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the structure for the dog data
 * @name: Is the name of the dog
 * @age: Its age
 * @owner: The owner of the dog
 *
 * Description: All these data are for the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
