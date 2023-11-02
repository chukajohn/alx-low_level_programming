#include "main.h"
/**
 *_realloc - a function that reallocates a memory block using malloc and free
 *@old_size: ----
 *@ptr: pointer
 *@new_size: new size
 *Return: always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
			return (NULL);

		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		newptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (newptr);
}
