/*
** EPITECH PROJECT, 2020
** cone
** File description:
** cone
*/

#include "../include/104intersection.h"
#include <math.h>
void my_cone(char **av)
{
    float a;
    float b;
    float c;
    double delta;
    double ang = (atof(av[8]) * M_PI / 180);

    a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2) - (pow(atof(av[7]), 2) * pow(tan(ang), 2));
    b = (2 * atof(av[2]) * atof(av[5])) + (2 * atof(av[3]) * atof(av[6])) - (2 * atof(av[4]) * atof(av[7]) * pow(tan(ang), 2));
    c = pow(atof(av[2]), 2) + pow(atof(av[3]), 2) - pow(atof(av[4]), 2) * pow(tan(ang), 2);
    delta = b * b - 4 * a * c;
    my_inter(delta, av, a, b);
}
