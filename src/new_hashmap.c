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
    hashmap->list = NULL;
    return (hashmap);
}

hashmap_t *reset_hashmap(hashmap_t **target)
{
    if (*target != NULL) { // If the target is already alocated
        if (sizeof(*target) != sizeof(hashmap_t)) { // If the target is not the same size as the hashmap structure
            free(*target);
            *target = malloc(sizeof(hashmap_t));
            (*target)->list = NULL;
        } else // If the the target is the same size as the hashmap structure, we just need to clear its values
            list_destroy(&(((*target)->list)));
    }
    *target = malloc(sizeof(hashmap_t));
    (*target)->list = NULL;
    return (*target);
}