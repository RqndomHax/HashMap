/*
** EPITECH PROJECT, 2021
** hashmap
** File description:
** new_hashmap
*/

#include "../includes/hashmap.h"

hashmap_t *new_hashmap(void)
{
    hashmap_t *hashmap = malloc(sizeof(hashmap_t));

    if (hashmap == NULL)
        return (NULL);
    hashmap->value = NULL;
    hashmap->key = NULL;
    return (hashmap);
}