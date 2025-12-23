#include "ntp.h"

int main(int ac, char **av)
{
    t_ntp *first;
    int *arr;

    if (ac <= 1)
    {
        write(1, "En az 1 sayi girmelisin!!", 25);
        return (1);
    }
    arr = ft_read(ac, av);
    first = ft_sorting(arr);
    ft_write(first);
}

int *ft_read(int ac, char **av)
{
    int *arr;

    arr = (int *)malloc(ac * sizeof(int));
    arr[0] = ac - 1;
    for (int i = 0; i < ac - 1; i++)
        arr[i + 1] = atoi(av[i + 1]);
    return (arr);
}

t_ntp   *ft_sorting(int *arr)
{
    t_ntp* first;
    t_ntp* buf;
    int flag = 1;

    first = malloc(sizeof(t_ntp));
    first->value = arr[1];
    first->is_write = 0;
    first->sag = NULL;
    first->sol = NULL;
    first->top_list = NULL;
    for (int i = 2; i < arr[0]; i++)
    {
        t_ntp* next;
        next->value = arr[i];
        next->is_write = 0;
        next->sag = NULL;
        next->sol = NULL;
        buf = first;
        while (flag)
        {
            next->top_list = buf;
            if (buf->value < next->value)
                buf = buf->sag;
            else if (buf->value > next->value)
                buf = buf->sol;
            if (buf == NULL)
            {
                buf = next;
                flag = 0;
            }
        }

    }
    return first;
}

void ft_write(t_ntp *first)
{
    if (first == NULL)
        return;
    
    // Sol alt ağacı yazdır
    ft_write(first->sol);
    
    // Mevcut node'u yazdır
    printf("%d ", first->value);
    
    // Sağ alt ağacı yazdır
    ft_write(first->sag);
}