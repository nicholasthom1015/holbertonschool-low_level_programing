#include "hash_tables.h"

/**
 * key_index - get index at which key/value pair should
 *		be stored in hash table array
 * @key: key to get index
 * @size: size of array
 *
 * Return: index of array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
