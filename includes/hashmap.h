/*
** EPITECH PROJECT, 2021
** hashmap
** File description:
** hashmap structure
*/

#ifndef HASHMAP_H_
#define HASHMAP_H_

#include <stdlib.h>

typedef struct hashmap_s
{
    unsigned long key;
    void *value;
}hashmap_t;

unsigned long hash(unsigned char const *str); // Using the djb2 by Dan Bernstein

hashmap_t *new_hashmap(void);

hashmap_t *reset_hashmap(hashmap_t **target);

void destroy_hashmap(hashmap_t **hashmap);

void *hashmap_get(hashmap_t *hashmap, unsigned long key);

void *hashmap_add(hashmap_t *hashmap, unsigned long key, void *value);

int hashmap_length(hashmap_t *hashmap);

void *hashmap_remove(hashmap_t *hasmap, unsigned long key);

#endif /* !HASHMAP_H_ */