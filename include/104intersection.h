/*
** EPITECH PROJECT, 2020
** 104
** File description:
** 104
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int my_error(int ac);
void usage();
int my_getnbr(char *str);
int check_arg(int ac);
int not_enough(int ac);
void my_sphere(char **av);
void my_cone(char **av);
void my_inter(float delta, char **av, float a, float b);
void my_cylinder(char **av);
int my_strisnum(char *str);
int is_nbr(int ac, char **av);
