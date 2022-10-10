#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Poppy, learning to work with structs
 *
 * @name: Is character example for poppy
 * @age: Is float for poppy age
 * @owner: Is a charcter for poppy owner
 *
 * Description: Program is database for information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
