#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: string name
 * @age: integer age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *maul;
	int i, j, k;
	char *n, *o;

	maul  = malloc(sizeof(struct dog));
	if (maul == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(maul);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(maul);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	maul->name = n;
	maul->age = age;
	maul->owner = o;

	return (maul);
}
