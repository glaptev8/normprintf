#include "includes/ft_printf.h"
#include <stdio.h>

int			main(void)
{

	printf("%d = norm \n", printf("%lu\n", -42));
	printf("%d = norm \n", ft_printf("%lu\n", -42);
	//	long unsigned int	i;
//	long unsigned int	a;
//	char				*c;
//	char				b;
//
//	b = 100;
//	c = &b;
//	printf("{%*d}\n", -5, 42);
//	ft_printf("{%*d}\n", -5, 42);
//	a = 100;
//	i = (long unsigned int)c;
//	ft_printf("%\n", "test");
//	printf("%.30p__i\n", i);
//	printf("% /n", "test");
	//	ft_printf("%c", '}');
//	ft_printf("%0+5d\n", 42);
//	printf("%0+5d", 42);
//	   printf("% d\n", ft_printf("%.d, %.0d", 0, 0));
//	   printf("% d\n", printf("%.d, %.0d", 0, 0));
//	ft_printf("%*d", 5, 12345);
//	printf("%40-30#+d", -42);
//	ft_printf("%lld\n", -LLONG_MAX);
//	   printf("%lld", -LLONG_MAX);
//	printf("% sdfs", "gleb");
	return (0);
}
