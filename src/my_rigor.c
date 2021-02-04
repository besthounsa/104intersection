/*
** EPITECH PROJECT, 2020
** rigor
** File description:
** errors manages
*/

#include "../include/104intersection.h"
#include <stdlib.h>
#include <stdio.h>

int check_arg(int ac)
{
    if(ac != 9)
        printf("Missing Arguments\n");
    return(84);
}

int my_error(int ac)
{
    if(check_arg(ac) == 84)
        return 84;
    /*  if(is_nbr(ac, av) == 84)
        return 84;*/
}


int my_strisnum(char *str)
{
    int i = 0;
    if (str[i] == '-') {
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            i++;
        }
        else {
            return (1);
        }
    }
    return (0);
}

int is_nbr(int ac, char **av)
{
    int i = 1;
    while( i < ac) {
        if(my_strisnum(av[i]) == 1) {
            printf("Veuillez mettre un nombre\n");
            return 84;
        }
    }
}
