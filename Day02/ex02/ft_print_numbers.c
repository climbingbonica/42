/*#include <unistd.h>
  
void    ft_putchar(int d)
{
        write(1, &d, 1);
}*/

void    ft_putchar(int d);

void    ft_print_numbers(void)
{
        int a;

        a = '0';
        while (a <= '9')
        {
                ft_putchar(a);
                a++;
        }
}
/*
int     main(void)
{
        ft_print_numbers();
        return(0);
}*/
