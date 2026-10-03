#include "libftprintf.h"
#include <stdlib.h>

int main()
{
	unsigned int a  = -15;
	int i = 100;
	int mi = -100;
	char c = 'c';
	char *s = "hello";
	char *ns = s;
	char *p = ns;
	int hexa = 2322004;
	

	int count = 0;
	
	count = ft_printf("%i\n", i);
	ft_printf("count = %d\n", count);
	count = ft_printf("%i\n", mi);
	ft_printf("count = %d\n", count);
	
	count = ft_printf("%c\n", c);
	ft_printf("count = %d\n", count);
	count = ft_printf("%s\n", s);
	ft_printf("count = %d\n", count);
	count = ft_printf("%p\n", p);
	ft_printf("count = %d\n", count);
	
	count = ft_printf("%X\n", hexa);
	ft_printf("count = %d\n", count);
	count = ft_printf("%x\n", hexa);
	ft_printf("count = %d\n", count);
	count = ft_printf("%%\n");
	ft_printf("count = %d\n", count);
	count = ft_printf("%u\n", a);
	ft_printf("%d\n", count);

}
