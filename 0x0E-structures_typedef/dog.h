#ifndef DOG_HEADER
#define DOG_HEADER

/**
  * struct dog - dog info
  * @name: 1st element
  * @age: 2nd element
  * @owner: 3rd element
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

/**
  * dog_t - new name for the type struct dog
  */
typedef struct dog dog_t;

#endif
