/*
** EPITECH PROJECT, 2021
** hashmap
** File description:
** main
*/

#include "includes/hashmap.h"
#include <stdio.h>

int main(void)
{
    hashmap_t *hashmap;

    hashmap = new_hashmap();
    destroy_hashmap(&hashmap);
    printf("key = %ld\n", hash("hello worl"));
    return (0);
}