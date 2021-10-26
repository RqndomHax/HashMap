/*
** EPITECH PROJECT, 2021
** hashmap
** File description:
** hashmap structure
*/

#ifndef HASHMAP_H_
#define HASHMAP_H_

#include "list.h"

typedef struct hashmap_s
{
    list_t *list;
}hashmap_t;

hashmap_t *new_hashmap(void);

hashmap_t *reset_hashmap(hashmap_t **target);

void destroy_hashmap(hashmap_t **hashmap);

void *hashmap_get(hashmap_t *hashmap, void *key);

void *hashmap_add(hashmap_t *hashmap, void *key, void *value);

void *hashmap_remove(hashmap_t *hasmap, void *key);

#endif /* !HASHMAP_H_ */