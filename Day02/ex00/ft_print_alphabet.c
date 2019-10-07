/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		ft_putchar('\n');
		a++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return(0);
}*/
