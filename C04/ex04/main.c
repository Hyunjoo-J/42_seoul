#include <stdio.h>
#include <limits.h>
void ft_putnbr_base(int nbr, char *base);
int		main(void)
{
	ft_putnbr_base(-123456, "helo");
	printf("\n");
	ft_putnbr_base(INT_MIN, "0123456789");
	ft_putnbr_base(INT_MAX, "0123456789");
}
