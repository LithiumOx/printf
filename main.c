#include "includes/printf.h"

int	main(void)
{
	int x = 0;
	int y = 0;

	x = ft_printf("Char: %c\n", 'a');
	y = printf("Char: %c\n", 'a');
	printf("\n(%d)\n", (x - y));
	x = ft_printf("String: %s\n", "abc");
	y = printf("String: %s\n", "abc");
	printf("\n(%d)\n", (x - y));
	x = ft_printf("Int: %i\n", 1234567890);
	y = printf("Int: %i\n", 1234567890);
	printf("\n(%d)\n", (x - y));
	x = ft_printf("Unsigned Int: %u\n", 1234567890);
	y = printf("Unsigned Int: %u\n", 1234567890);
	printf("\n(%d)\n", (x - y));
	x = ft_printf("Small hex: %x\n", 1234567890);
	y = printf("Small hex: %x\n", 1234567890);
	printf("\n(%d)\n", (x - y));
	x = ft_printf("Big hex: %X\n", 1234567890);
	y = printf("Big hex: %X\n", 1234567890);
	printf("\n(%d)\n", (x - y));
	x = ft_printf("Pointer: %p\n", &ft_printf);
	y = printf("Pointer: %p\n", &ft_printf);
	printf("\n(%d)\n", (x - y));
	x = ft_printf("Percent: %%\n");
	y = printf("Percent: %%\n");
	printf("\n(%d)\n", (x - y));
	x = ft_printf("2x Percent %%\n");
	y = printf("2x Percent %%\n");
	printf("\n(%d)\n", (x - y));
	x = ft_printf("4x Percent %%%%\n");
	y = printf("4x Percent %%%%\n");
	printf("\n(%d)\n", (x - y));

	return (0);
}