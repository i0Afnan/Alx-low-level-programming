#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for doggy
 *
 * @name: dog's name
 * @age: doggy's age
 * @owner: the owner of the dog
 *
 * Description: dog's general information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
