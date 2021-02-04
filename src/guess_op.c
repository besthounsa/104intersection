/*
** EPITECH PROJECT, 2020
** operation
** File description:
** gess the operatio,
*/

#include <stdio.h>
#include "../include/104intersection.h"

void guess_op(char **av)
{
    int operator = my_getnbr(av[1]);
    int radius = my_getnbr(av[8]);
    if(my_getnbr(av[1]) == 1) {
        printf("Sphere of radius %d\n", radius);
        my_sphere(av);
    }
   else if(my_getnbr(av[1]) == 2) {
        printf("Cylinder of radius %d\n", radius);
        my_cylinder(av);
    }
   else if(my_getnbr(av[1]) == 3) {
        printf("Cone with a %d degree angle\n", radius);
        my_cone(av);
    }
}
