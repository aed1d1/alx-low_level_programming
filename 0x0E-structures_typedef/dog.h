#ifndef STRUCT_H
#define STRUCT_H


/**
* struct dog - a dog's basic info
* @name: points to the dog's name
* @age: points to the dog's age
* @owner: points to the owner's name
* Description: Longer description
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
