#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 *
 * @name: name of the og
 * @age: age of the dog
 * @owner: owner of the dog
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_g -Typedef for struct dog
*/
typedef struct dog dog_g;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_g *new_dog(char *name, float age, char *owner);
void free_dog(dog_g *d);

#endif /* struct dog */
