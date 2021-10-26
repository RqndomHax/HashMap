/*
** EPITECH PROJECT, 2021
** hashmap
** File description:
** destroy_hashmap
*/

#include "../includes/hashmap.h"
#include "../includes/list.h"

void destroy_hashmap(hashmap_t **hashmap)
{
    if (*hashmap == NULL)
        return;
    list_destroy(&((*hashmap)->list));
    free(*hashmap);
    *hashmap = NULL;
}