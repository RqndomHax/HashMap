/*
** EPITECH PROJECT, 2021
** hashmap
** File description:
** destroy_hashmap
*/

#include "../includes/hashmap.h"

static void destroy_elements(hashmap_t *hashmap)
{
    (void) hashmap;
    // TODO
}

void destroy_hashmap(hashmap_t **hashmap)
{
    if (*hashmap == NULL)
        return;
    destroy_elements(*hashmap);
    free(*hashmap);
    *hashmap = NULL;
}

void clear_hashmap(hashmap_t *hashmap)
{
    if (hashmap != NULL)
        destroy_elements(hashmap);
}