#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of array
 * Return: pointer to the newly created array, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size){
	hash_table_t *table = malloc(size * sizeof(hash_table_t));

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
	free(table);
}
