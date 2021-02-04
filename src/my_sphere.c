/*
** EPITECH PROJECT, 2020
** sphere
** File description:
** sphere
*/

#include "../include/104intersection.h"
#include <math.h>

void my_sphere(char **av)
{
    float a;
    float b;
    float c;
    double delta;

    a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2) + pow(atof(av[7]), 2);
    b = (2 * atof(av[2]) * atof(av[5])) + (2 * atof(av[3]) * atof(av[6])) + (2 * atof(av[4]) * atof(av[7]));
    c = pow(atof(av[2]), 2) + pow(atof(av[3]), 2) + pow(atof(av[4]), 2) - pow(atof(av[8]), 2);
    delta = (b * b) - (4 * a * c);
    my_inter(delta, av, a, b);
}
