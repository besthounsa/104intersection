/*
** EPITECH PROJECT, 2021
** get nbr
** File description:
** getnbr
*/

int my_getnbr(char *str)
{
    int o;
    int n = 1;
    int res = 0;

    for (o = 0; str[o] == '-' || str[o] == '+'; o++){
        if(str[o] == '-')
            n = n * (-1);
    }
    for ( ; str[o] >= '0' && str[o] <= '9'; o++)
        res = res * 10 + str[o] - 48;
    return (n * res);
}
