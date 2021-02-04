/*
** EPITECH PROJECT, 2020
** ops
** File description:
** ops
*/

#include "../include/104intersection.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void my_inter(float delta, char **av, float a, float b)
{
    double x_1;
    double x_2;
    int x = atoi(av[2]);
    int y = atoi(av[3]);
    int z = atoi(av[4]);
    int V_x = atoi(av[5]);
    int V_y = atoi(av[6]);
    int V_z = atoi(av[7]);

    printf("Line passing through the point (%d, %d, %d) and parallel to the vector (%d, %d, %d)\n", x, y, z, V_x, V_y, V_z);
    if (delta == 0) {
        printf("1 intersection point:\n");
        x_1 = ((-b) - sqrt(delta)) / (2 * a);
        printf("(%.3f, %.3f, %.3f)\n", x_1 * V_x + x, x_1 * V_y + y, x_1 * V_z + z);
    }
    else if (delta > 0) {
        printf("2 intersection points:\n");
        x_1 = ((-b) - sqrt(delta)) / (2 * a);
        x_2 = ((-b) + sqrt(delta)) / (2 * a);
        printf("(%.3f, %.3f, %.3f)\n", x_2 * V_x + x, x_2 * V_y + y, x_2 * V_z + z);
        printf("(%.3f, %.3f, %.3f)\n",  x_1 * V_x + x, x_1 * V_y + y, x_1 * V_z + z);
    }
    if (delta  < 0) {
        printf("No intersection point.\n");
    }
}
