/*#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}*/

void    ft_putchar(char c);

void    ft_print_comb(void)
{
        char n1;
	char n2;
	char n3;

	n1 = '0' - 1;
	while (++n1 <= '9')
	{
		n2 = n1;
		while (++n2 <= '9')
		{
			n3 = n2;
			while (++n3 <= '9')
			{
				ft_putchar(n1);
				ft_putchar(n2);
				ft_putchar(n3);
				if (n1 < '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
/*
int     main(void)
{
        ft_print_comb();
        return(0);
}*/
