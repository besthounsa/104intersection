/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <stdio.h>
#include "../include/104intersection.h"

void guess_op(char **av);
int is_nbr(int ac, char **av);
int main(int ac, char **av)
{
    if(ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        usage();
        return (0);
    }
    if (ac != 9 || my_strisnum(av[1]) == 1 || my_strisnum(av[2]) == 1 || my_strisnum(av[3]) == 1 || my_strisnum(av[4]) == 1 || my_strisnum(av[5]) == 1 || my_strisnum(av[6]) == 1 || my_strisnum(av[7]) == 1 || my_strisnum(av[8]) == 1 || av[8][0] == '-')
        return 84;
    else {
        guess_op(av);
    }
}
