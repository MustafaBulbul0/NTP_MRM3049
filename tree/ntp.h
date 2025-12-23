#ifndef NTP_H
#define NTP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_ntp
{
    int value;
    int is_write;
    struct s_ntp* sag;
    struct s_ntp* sol;
    struct s_ntp* top_list;
}   t_ntp;

int *ft_read(int ac, char **av);
t_ntp   *ft_sorting(int *arr);
void ft_write(t_ntp *first);

#endif