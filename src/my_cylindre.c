/*
** EPITECH PROJECT, 2020
** cylindre
** File description:
** cylindre
*/

#include <math.h>
#include "../include/104intersection.h"

void my_cylinder(char **av)
{
    float a;
    float b;
    float c;
    double delta;

    a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2);
    b = (2 * atof(av[2]) * atof(av[5])) + (2 * atof(av[3]) * atof(av[6]));
    c = pow(atof(av[2]), 2) + pow(atof(av[3]), 2) - pow(atof(av[8]), 2);
    delta = b * b - 4 * a * c;
    my_inter(delta, av, a, b);
}
