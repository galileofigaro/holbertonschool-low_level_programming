#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new struct
 *@name: dog name
 *@age: dog years
 *@owner: lucky
 * Description - Define new struct
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
