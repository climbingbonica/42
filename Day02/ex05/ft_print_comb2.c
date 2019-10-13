/*#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}*/

void    ft_putchar(char c);

void    ft_print_comb2(void)
{
        int n1;
	int n2;
	
	n1 = 0;
	while (n1 < 100)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			ft_putchar(n1 / 10 + '0');
			ft_putchar(n1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(n2 / 10 + '0');
			ft_putchar(n2 % 10 + '0');
			if (!(n1 == 98 && n2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}
/*
int     main(void)
{
        ft_print_comb2();
        return(0);
}*/
