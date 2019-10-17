/*#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}*/

void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
	long int lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchar('-');
		lnb = lnb * -1;
	}
        if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
		ft_putnbr(lnb % 10);
	}
	else	
		ft_putchar(lnb + '0');
}
/*
int     main(void)
{
        ft_putnbr(-2147483648);
        return(0);
}*/
