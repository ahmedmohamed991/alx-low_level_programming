#ifndef DOG_H
#define DOG_H
/**
 * @struct dog
 * Represents a dog with its name, age, and owner information.
 *
 * @var char* name
 * The name of the dog.
 *
 * @var float age
 * The age of the dog.
 *
 * @var char* owner
 * The owner of the dog.
*/
struct dog {
	char *name;
	float age;
	char *owner;
}
#endif
