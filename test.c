#include "libftprintf.h"

int main()
{
	unsigned int a  = 15;
	int i = 100;
	int mi = -100;
	char c = 'c';
	char *s = "hello";
	char *ns = NULL;
	char *p = NULL;
	int count = ft_printf("int: %i, mi: %i, char: %c, str: %s, nstr: %s, pointer: %p", i, mi, c, s, ns, p);
	ft_printf("\ncount: %d", count);
}
