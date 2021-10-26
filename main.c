/*
** EPITECH PROJECT, 2021
** hash maps
** File description:
** main
*/

#include "includes/hashmap.h"
#include <stdio.h>

int main(void)
{
    hashmap_t *hashmap;

    hashmap = new_hashmap();
    printf("%p\n", hashmap);
    destroy_hashmap(&hashmap);
    return (0);
}