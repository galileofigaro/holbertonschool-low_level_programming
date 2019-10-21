#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - new struct
 *@name: dog name
 *@age: dog years
 *@owner: lucky
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
