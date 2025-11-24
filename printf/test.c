#include "ft_printf.h"

//ccwww printf_base_nbr.c printf_base_ptr.c printf_char.c printf_str.c test.c
// int main(void)
// {
// printf_str("=================================test d&i=================================\n");
// 	printf_putnbr_base(-2147483, "0123456789", 10, 'd');  //0, min_num, -1
// 	printf_char('\n');
// 	printf("printf d  %d , %d ,%d ,%d \n", -2147483, 5461412, 0, 20); //print_nbr vvv  the printf can't print the min_int(-2147483648)
// 	printf("printf i  %i , %i ,%i ,%i\n", -2147483, 5461412, 0, 20); //print_nbr vvv
// printf_str("=================================test u=================================\n");
// 	printf_putnbr_base(-10, "0123456789", 10, 'u');
// 	printf_char('\n');
// 	printf("printf u  %u , %u ,%u  ,%u\n", -10, -21474838, 11, 200);  //print_unsigned_nbr vvv
// printf_str("=================================test x=================================\n");
// 	printf_putnbr_base(-10, "0123456789abcdef", 16, 'x');
// 	printf_char('\n');
// 	printf("printf x  %x , %x ,%x \n", 10, 1111, 10); //print_base
// printf_str("=================================test X=================================\n");
// 	printf_putnbr_base(-10, "0123456789ABCDEF", 16, 'X');
// 	printf_char('\n');
// 	printf("printf X  %X , %X ,%X \n", 10, 1111, 11); //print_base
// printf_str("=================================test %%=================================\n");
// 	printf_char('%');
// 	printf_char('\n');
// 	printf("%%\n");
// 	printf("%d%%\n",42);
// printf_str("=================================test p=================================\n");
// 	char	*p1 = NULL;
// 	char	c = 'o';
// 	char	*p2 = &c;
// 	printf_putptr_base((uintptr_t)p1, "0123456789abcdef", 16);
// 	printf_char('\n');
// 	printf_putptr_base((uintptr_t)p2, "0123456789abcdef", 16);
// 	printf_char('\n');
// 	printf("printf p:  %p ,%p \n\n", p1, p2); //print_base_pointer
// 	return (0);
// }

// ccwww printf_base_nbr.c printf_base_ptr.c printf_char.c printf_str.c ft_printf.c test.c
int	main(void)
{
	// int	*p1 = NULL;
	// char *str = NULL;
	// int	i = 42;
	// char c = 'c';
	// int	*p2;
	// p2 = &i;
	// int	count1;
	// int	count2;

	// count1 = ft_printf("hello %s %s, hello %d, yyyyyyyy %p %p xxxx %x XXX %X uuu %u %c%%\n", "yihuan", str, i, p1, p2, -1, -1, -111, c);
	// printf("yihuan count:%d\n", count1);
	// count2 = printf("hello %s %s, hello %d, yyyyyyyy %p %p xxxx %x XXX %X uuu %u %c%%\n", "yihuan", str, i, p1, p2, -1, -1, -111, c);
	// printf("printf count:%d\n", count2);

	printf("%d", ft_printf(0));
}
