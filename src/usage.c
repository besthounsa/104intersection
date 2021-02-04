/*
** EPITECH PROJECT, 2020
** usage
** File description:
** description
*/
#include <stdio.h>
void usage ()
{
    printf("USAGE\n\t ./104intersection opt xp yp zp xv yv zv p\n\n");
    printf("DESCRIPTION\n");
    printf("opt\t\t surface option: 1 for a sphere, 2 for a cylinder, 3 for a cone\n");
    printf("(xp, yp, zp)\t coordinates of a point by which the light ray passes through\n");
    printf("(xv, yv, zv)\t coordinates of a vector parallel to the light ray\n");
    printf("p \t\t parameter: radius of the sphere, radius of the cylinder, or angle formed by the cone and the Z-axis\n");
}
