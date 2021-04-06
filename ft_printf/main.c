#include <stdio.h>
#include <limits.h>

#define BLU   "\x1B[34m"
#define RESET "\x1B[0m"


int ft_printf(const char *str, ...);


int main(void)
{
//	int		a = -4;
//	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
//	int		f = 42;
//	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
//	char	*s = "-2147483648";
//	char	*t = "0x12345678";
//	char	*u = "-0";
	char *s_hidden = "hidden";

	int orig;
	int mine;

	orig =    printf("orig: Simple input test\n");
	mine = ft_printf("mine: Simple input test\n");
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %d, %d, %d, %d, %d, %s, %d, %d, %d, %x, %x\n", i, j, k, l, m, n, c, c, j, j, j);
	mine = ft_printf("mine: %d, %d, %d, %d, %d, %s, %d, %d, %d, %x, %x\n", i, j, k, l, m, n, c, c, j, j, j);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %1d, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d);
	mine = ft_printf("mine: %1d, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %2d, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d);
	mine = ft_printf("mine: %2d, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d);
	mine = ft_printf("mine: %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %4d, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d);
	mine = ft_printf("mine: %4d, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %5d, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", i, j, k, l, m, c, e, d);
	mine = ft_printf("mine: %5d, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", i, j, k, l, m, c, e, d);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %6d, %6d, %6d, %6d, %6d, %6d, %6d, %6d\n", i, j, k, l, m, c, e, d);
	mine = ft_printf("mine: %6d, %6d, %6d, %6d, %6d, %6d, %6d, %6d\n", i, j, k, l, m, c, e, d);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %7d, %7d, %7d, %7d, %7d, %7d, %7d, %7d\n", i, j, k, l, m, c, e, d);
	mine = ft_printf("mine: %7d, %7d, %7d, %7d, %7d, %7d, %7d, %7d\n", i, j, k, l, m, c, e, d); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %8d, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d); 
	mine = ft_printf("mine: %8d, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %.d, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); 
	mine = ft_printf("mine: %.d, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); 
	mine = ft_printf("mine: %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %.d, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); 
	mine = ft_printf("mine: %.d, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d); 
	mine = ft_printf("mine: %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); 
	mine = ft_printf("mine: %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); 
	mine = ft_printf("mine: %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d); 
	mine = ft_printf("mine: %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %12.12d, %12.12d\n", -42, 42); 
	mine = ft_printf("mine: %12.12d, %12.12d\n", -42, 42); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); 
	mine = ft_printf("mine: %1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); 
	mine = ft_printf("mine: %2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); 
	mine = ft_printf("mine: %3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); 
	mine = ft_printf("mine: %4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); 
	mine = ft_printf("mine: %15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); 
	mine = ft_printf("mine: %16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); 
	mine = ft_printf("mine: %17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); 
	mine = ft_printf("mine: %.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); 
	mine = ft_printf("mine: %1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e); 
	mine = ft_printf("mine: %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %x, %x, %x, %x\n", 209590960, 207038912, 1, 0); 
	mine = ft_printf("mine: %x, %x, %x, %x\n", 209590960, 207038912, 1, 0); 
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %%, \t, \\, \", \', +\n");
	mine = ft_printf("mine: %%, \t, \\, \", \', +\n");
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %%%dbada%s%%**%s**-d%%0*d%12s0*@\n",   h, "bada", r, p);
	mine = ft_printf("mine: %%%dbada%s%%**%s**-d%%0*d%12s0*@\n", h, "bada", r, p);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//                                         h        bada        r                  
	orig =    printf("orig: %% [%d] bada [%s] %% ** [%s] **-d %% 0*d  [%12s]  0*@\n",   h, "bada", r, p);
	mine = ft_printf("mine: %% [%d] bada [%s] %% ** [%s] **-d %% 0*d  [%12s]  0*@\n", h, "bada", r, p);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %d, %d, %d, %d, %d, %d, %d, %x, %x\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	mine = ft_printf("mine: %d, %d, %d, %d, %d, %d, %d, %x, %x\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %d, %d, %12d, %3d, %1d, %1d, %2d, %4d, %5d, %3d\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	mine = ft_printf("mine: %d, %d, %12d, %3d, %1d, %1d, %2d, %4d, %5d, %3d\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %2s, %.s, %4s, %2.4s, %8.12s, %3s, %8s, %2s, %.s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	mine = ft_printf("mine: %2s, %.s, %4s, %2.4s, %8.12s, %3s, %8s, %2s, %.s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: %2s, %.s, %4s, %2.4s, %8.12s, %3s, %8s, %2s, %.s, %.0s, %.1s, %.2s, %.4s, %.8s\n", p,p,p,p,p,p,p,p,p,p,p,p,p,p);
	mine = ft_printf("mine: %2s, %.s, %4s, %2.4s, %8.12s, %3s, %8s, %2s, %.s, %.0s, %.1s, %.2s, %.4s, %.8s\n", p,p,p,p,p,p,p,p,p,p,p,p,p,p);
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);
	
	// ^ Theoriquement un comportement indefini mais testé par la moulinette
	
	orig =    printf("orig: (null)\n");
	mine = ft_printf("mine: (null)\n");
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	orig =    printf("orig: \n");
	mine = ft_printf("mine: \n");
	printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

	

/* -----------------------------------------------------------------------------
** 						%s STRING TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
orig =    printf("orig: hello, %s.\n", "gavin");
mine = ft_printf("mine: hello, %s.\n", "gavin");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %s\n", "testing testing");
mine = ft_printf("mine: %s\n", "testing testing");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %s%s\n", "hello", "world");
mine = ft_printf("mine: %s%s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: ..%s stuff %s\n", "a", "b");
mine = ft_printf("mine: ..%s stuff %s\n", "a", "b");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: this %s is empty\n", "");
mine = ft_printf("mine: this %s is empty\n", "");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: this %s is %s\n", "hello", "");
mine = ft_printf("mine: this %s is %s\n", "hello", "");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: this %s is %s\n", "", "hello");
mine = ft_printf("mine: this %s is %s\n", "", "hello");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %s%s%s\n", "1", "2", "3's a charm");
mine = ft_printf("mine: %s%s%s\n", "1", "2", "3's a charm");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %32s\n", "abc");
mine = ft_printf("mine: %32s\n", "abc");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %16s\n", "nark nark");
mine = ft_printf("mine: %16s\n", "nark nark");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//String specifiers - no modifiers

//String specifiers with field_width, space- or zero-padded
orig =    printf("orig: \n");
mine = ft_printf("mine: \n");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %5s\n", "goes over");
mine = ft_printf("mine: %5s\n", "goes over");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//String specifiers with precision
orig =    printf("orig: %.7s\n", "hello");
mine = ft_printf("mine: %.7s\n", "hello");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.3s\n", "hello");
mine = ft_printf("mine: %.3s\n", "hello");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.s\n", "hello");
mine = ft_printf("mine: %.s\n", "hello");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.0s\n", "hello");
mine = ft_printf("mine: %.0s\n", "hello");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.3s%.2s\n", "holla", "bitch");
mine = ft_printf("mine: %.3s%.2s\n", "holla", "bitch");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.2s%.7s\n", "hello", "world");
mine = ft_printf("mine: %.2s%.7s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.7s%.2s\n", "hello", "world");
mine = ft_printf("mine: %.7s%.2s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.5s%7s\n", "yo", "boi");
mine = ft_printf("mine: %.5s%7s\n", "yo", "boi");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//String specifiers with both precision and field width
orig =    printf("orig: %7.5s\n", "yolo");
mine = ft_printf("mine: %7.5s\n", "yolo");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7.5s\n", "bombastic");
mine = ft_printf("mine: %7.5s\n", "bombastic");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7.7s%7.7s\n", "hello", "world");
mine = ft_printf("mine: %7.7s%7.7s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.7s%7.7s\n", "hello", "world");
mine = ft_printf("mine: %3.7s%7.7s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7.7s%3.7s\n", "hello", "world");
mine = ft_printf("mine: %7.7s%3.7s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.7s%3.7s\n", "hello", "world");
mine = ft_printf("mine: %3.7s%3.7s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7.3s%7.7s\n", "hello", "world");
mine = ft_printf("mine: %7.3s%7.7s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.3s%7.7s\n", "hello", "world");
mine = ft_printf("mine: %3.3s%7.7s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7.3s%3.7s\n", "hello", "world");
mine = ft_printf("mine: %7.3s%3.7s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.3s%3.7s\n", "hello", "world");
mine = ft_printf("mine: %3.3s%3.7s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7.7s%7.3s\n", "hello", "world");
mine = ft_printf("mine: %7.7s%7.3s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.7s%7.3s\n", "hello", "world");
mine = ft_printf("mine: %3.7s%7.3s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7.7s%3.3s\n", "hello", "world");
mine = ft_printf("mine: %7.7s%3.3s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.7s%3.3s\n", "hello", "world");
mine = ft_printf("mine: %3.7s%3.3s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7.3s%7.3s\n", "hello", "world");
mine = ft_printf("mine: %7.3s%7.3s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.3s%7.3s\n", "hello", "world");
mine = ft_printf("mine: %3.3s%7.3s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7.3s%3.3s\n", "hello", "world");
mine = ft_printf("mine: %7.3s%3.3s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.3s%3.3s\n", "hello", "world");
mine = ft_printf("mine: %3.3s%3.3s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3s%3s\n", "hello", "world");
mine = ft_printf("mine: %3s%3s\n", "hello", "world");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//String specifiers - NULL strings
orig =    printf("orig: hello, %s.\n", NULL);
mine = ft_printf("mine: hello, %s.\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %s\n", NULL);
mine = ft_printf("mine: %s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %32s\n", NULL);
mine = ft_printf("mine: %32s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %2s\n", NULL);
mine = ft_printf("mine: %2s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);


//String specifiers with precision
orig =    printf("orig: %.9s\n", "NULL");
mine = ft_printf("mine: %.9s\n", "NULL");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.3s\n", "NULL");
mine = ft_printf("mine: %.3s\n", "NULL");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.s\n", "NULL");
mine = ft_printf("mine: %.s\n", "NULL");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.0s\n", "NULL");
mine = ft_printf("mine: %.0s\n", "NULL");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//String s_hidden tests
//orig =    printf("orig: hi low\0don't print me lol\0");  printf("\n"); /// ?????????????????????
//mine = ft_printf("mine: hi low\0don't print me lol\0");  printf("\n"); /// ?????????????????????

orig =    printf("orig: %s\n", s_hidden);
mine = ft_printf("mine: %s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

// width pad
orig =    printf("orig: %3s\n", s_hidden);
mine = ft_printf("mine: %3s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %9s\n", s_hidden);
mine = ft_printf("mine: %9s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

// precision no width
orig =    printf("orig: %.s\n", s_hidden);
mine = ft_printf("mine: %.s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.9s\n", s_hidden);
mine = ft_printf("mine: %.9s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

// precision  0 before number
orig =    printf("orig: %.03s\n", s_hidden);
mine = ft_printf("mine: %.03s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.09s\n", s_hidden);
mine = ft_printf("mine: %.09s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.03s\n", NULL);   // 95
mine = ft_printf("mine: %.03s\n", NULL);   // 95
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.09s\n", NULL);
mine = ft_printf("mine: %.09s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.00s\n", "\0");
mine = ft_printf("mine: %.00s\n", "\0");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.01s\n", "\0");
mine = ft_printf("mine: %.01s\n", "\0");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.03s\n", "\0");
mine = ft_printf("mine: %.03s\n", "\0");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.09s\n", "\0");
mine = ft_printf("mine: %.09s\n", "\0");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

// width  no precision
orig =    printf("orig: %3.s\n", s_hidden);
mine = ft_printf("mine: %3.s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %10.s\n", s_hidden);
mine = ft_printf("mine: %10.s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.s\n", NULL);
mine = ft_printf("mine: %3.s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %10.s\n", NULL);
mine = ft_printf("mine: %10.s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %1.s\n", "\0");
mine = ft_printf("mine: %1.s\n", "\0");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %2.s\n", "\0");
mine = ft_printf("mine: %2.s\n", "\0");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %9.s\n", "\0");
mine = ft_printf("mine: %9.s\n", "\0");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

// width  precision 1
orig =    printf("orig: %3.1s\n", s_hidden);
mine = ft_printf("mine: %3.1s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %10.1s\n", s_hidden);
mine = ft_printf("mine: %10.1s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: [%3.1s]\n", NULL);  // 110
mine = ft_printf("mine: [%3.1s]\n", NULL);  // 110
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: [%9.1s]\n", NULL);   // 111
mine = ft_printf("mine: [%9.1s]\n", NULL);   // 111
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

// width  exact precision
orig =    printf("orig: %3.6s\n", s_hidden);
mine = ft_printf("mine: %3.6s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %20.6s\n", s_hidden);
mine = ft_printf("mine: %20.6s\n", s_hidden);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.6s\n", NULL);
mine = ft_printf("mine: %3.6s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %20.6s\n", NULL);
mine = ft_printf("mine: %20.6s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);\

orig =    printf("orig: %3.6s\n", "\0");
mine = ft_printf("mine: %3.6s\n", "\0");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %6.6s\n", "\0");
mine = ft_printf("mine: %6.6s\n", "\0");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);


/* -----------------------------------------------------------------------------
** 						%d INTEGER TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Signed integers - no modifers
orig =    printf("orig: this %d number\n", 17);
mine = ft_printf("mine: this %d number\n", 17);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: this %d number\n", -267);
mine = ft_printf("mine: this %d number\n", -267);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: this %d number\n", 0);
mine = ft_printf("mine: this %d number\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %d\n", 3);
mine = ft_printf("mine: %d\n", 3);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %d\n", -1);
mine = ft_printf("mine: %d\n", -1);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %d\n", 0);
mine = ft_printf("mine: %d\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %d\n",  2147483647);
mine = ft_printf("mine: %d\n",  2147483647);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %d\n", (int)(-2147483678));
mine = ft_printf("mine: %d\n", (int)(-2147483678));
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//Signed integers with field width
orig =    printf("orig: %7d\n", 33);
mine = ft_printf("mine: %7d\n", 33);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %7d\n", -14);
mine = ft_printf("mine: %7d\n", -14);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3d\n", 0);
mine = ft_printf("mine: %3d\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %5d\n", 52625);
mine = ft_printf("mine: %5d\n", 52625);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %5d\n", -2562);
mine = ft_printf("mine: %5d\n", -2562);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %4d\n", 94827);
mine = ft_printf("mine: %4d\n", 94827);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %4d\n", -2464);
mine = ft_printf("mine: %4d\n", -2464);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//signed integers with precision
orig =    printf("orig: %.5d\n", 2);
mine = ft_printf("mine: %.5d\n", 2);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.6d\n", -3);
mine = ft_printf("mine: %.6d\n", -3);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.3d\n", 0);
mine = ft_printf("mine: %.3d\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.4d\n", 5263);
mine = ft_printf("mine: %.4d\n", 5263);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.4d\n", -2372);
mine = ft_printf("mine: %.4d\n", -2372);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.3d\n", 13862);
mine = ft_printf("mine: %.3d\n", 13862);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.3d\n",-23646);
mine = ft_printf("mine: %.3d\n",-23646);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);



//Signed integers with field width and precision
orig =    printf("orig: %8.5d\n", 34);
mine = ft_printf("mine: %8.5d\n", 34);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %10.5d\n", -216);
mine = ft_printf("mine: %10.5d\n", -216);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %8.5d\n", 0);
mine = ft_printf("mine: %8.5d\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %8.3d\n", 8375);
mine = ft_printf("mine: %8.3d\n", 8375);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %8.3d\n", -8473);
mine = ft_printf("mine: %8.3d\n", -8473);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.7d\n", 3267);
mine = ft_printf("mine: %3.7d\n", 3267);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.7d\n", -2375);
mine = ft_printf("mine: %3.7d\n", -2375);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.3d\n", 6983);
mine = ft_printf("mine: %3.3d\n", 6983);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %3.3d\n", -8462);
mine = ft_printf("mine: %3.3d\n", -8462);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);



//Signed integers - zero precision zero value
orig =    printf("orig: %.0d\n", 0);
mine = ft_printf("mine: %.0d\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %.d\n", 0);
mine = ft_printf("mine: %.d\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %5.0d\n", 0);
mine = ft_printf("mine: %5.0d\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

orig =    printf("orig: %5.d\n", 0);
mine = ft_printf("mine: %5.d\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);



	

/* -----------------------------------------------------------------------------
** 						%x HEXADECIMAL LOWERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Hexadecimal lowers - no modifers
 orig =    printf("orig: this %x number\n", 17); // 174
 mine = ft_printf("mine: this %x number\n", 17); // 174
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: this %x number\n", 0);
 mine = ft_printf("mine: this %x number\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %x\n", 3);
 mine = ft_printf("mine: %x\n", 3);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %x\n", 4294967295u);
 mine = ft_printf("mine: %x\n", 4294967295u);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//Hexadecimal lowers with field width
 orig =    printf("orig: %7x\n", 33);
 mine = ft_printf("mine: %7x\n", 33);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %3x\n", 0);
 mine = ft_printf("mine: %3x\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %5x\n", 52625);
 mine = ft_printf("mine: %5x\n", 52625);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %2x\n", 94827);
 mine = ft_printf("mine: %2x\n", 94827);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//Hexadecimal lowers with precision
 orig =    printf("orig: %.5x\n", 21);
 mine = ft_printf("mine: %.5x\n", 21);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %.3x\n", 0);
 mine = ft_printf("mine: %.3x\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %.4x\n", 5263);
 mine = ft_printf("mine: %.4x\n", 5263);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %.3x\n", 938862);
 mine = ft_printf("mine: %.3x\n", 938862);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);


//Hexadecimal lowers with field width and precision
 orig =    printf("orig: %8.5x\n", 34);
 mine = ft_printf("mine: %8.5x\n", 34);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %8.5x\n", 0);
 mine = ft_printf("mine: %8.5x\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %8.3x\n", 8375);
 mine = ft_printf("mine: %8.3x\n", 8375);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %2.7x\n", 3267);
 mine = ft_printf("mine: %2.7x\n", 3267);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %3.3x\n", 6983);
 mine = ft_printf("mine: %3.3x\n", 6983);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);


//Hexadecimal lower - zero precision zero value
 orig =    printf("orig: %.0x\n", 0);
 mine = ft_printf("mine: %.0x\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %.x\n", 0);
 mine = ft_printf("mine: %.x\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %5.0x\n", 0);
 mine = ft_printf("mine: %5.0x\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %5.x\n", 0);
 mine = ft_printf("mine: %5.x\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);


/* -----------------------------------------------------------------------------
** 					NO CRASH / NO SEGFAULT TESTS (NOT REQUIRED)
** ---------------------------------------------------------------------------*/
//No-crash-no-segfault test

  //orig =    printf("orig: [%d]");
  //mine = ft_printf("mine: [%d]");

  //orig =    printf("orig: [%x]");
  //mine = ft_printf("mine: [%x]");

  orig =    printf("orig: %1$s\n", NULL);
  mine = ft_printf("mine: %1$s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

  orig =    printf("orig: %23s\n", NULL);
  mine = ft_printf("mine: %23s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

  orig =    printf("orig: %.s\n", NULL);
  mine = ft_printf("mine: %.s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

  orig =    printf("orig: %d\n", NULL);
  mine = ft_printf("mine: %d\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

  orig =    printf("orig: %x\n", NULL);
  mine = ft_printf("mine: %x\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

  orig =    printf("orig: %s\n", NULL);
  mine = ft_printf("mine: %s\n", NULL);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);



/* -----------------------------------------------------------------------------
** 							MOULINETTE TESTS - MANDATORY
** ---------------------------------------------------------------------------*/

char *str = NULL;

 orig =    printf("orig:  pouet %s !!\n", "camembert");
 mine = ft_printf("mine:  pouet %s !!\n", "camembert");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %s !\n", "Ceci n'est pas un \0 exercice !");
 mine = ft_printf("mine: %s !\n", "Ceci n'est pas un \0 exercice !");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %s!\n", "Ceci n'est toujours pas un exercice !");
 mine = ft_printf("mine: %s!\n", "Ceci n'est toujours pas un exercice !");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %s!\n", str);
 mine = ft_printf("mine: %s!\n", str);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %d\n", 42);
 mine = ft_printf("mine: %d\n", 42);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: Kashim a %d histoires à raconter\n", 1001);
 mine = ft_printf("mine: Kashim a %d histoires à raconter\n", 1001);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: Il fait au moins %d\n", -8000);
 mine = ft_printf("mine: Il fait au moins %d\n", -8000);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %d\n", -0);
 mine = ft_printf("mine: %d\n", -0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %d\n", 0);
 mine = ft_printf("mine: %d\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %d\n", INT_MAX);
 mine = ft_printf("mine: %d\n", INT_MAX);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %d\n", INT_MIN);
 mine = ft_printf("mine: %d\n", INT_MIN);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %d\n", INT_MIN - 1);
 mine = ft_printf("mine: %d\n", INT_MIN - 1);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %d\n", INT_MAX + 1);
 mine = ft_printf("mine: %d\n", INT_MAX + 1);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %%d 0000042 == |%d|\n", 0000042);
 mine = ft_printf("mine: %%d 0000042 == |%d|\n", 0000042);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %%d \t == |%d|\n", '\t');
 mine = ft_printf("mine: %%d \t == |%d|\n", '\t');
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');
 mine = ft_printf("mine: %%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %s\n", 100, "Ly", "replaced p");
 mine = ft_printf("mine: Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %s\n", 100, "Ly", "replaced p");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %x\n", 42);
 mine = ft_printf("mine: %x\n", 42);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: Kashim a %x histoires à raconter\n", 1001);
 mine = ft_printf("mine: Kashim a %x histoires à raconter\n", 1001);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: Il fait au moins %x\n", -8000);
 mine = ft_printf("mine: Il fait au moins %x\n", -8000);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %x\n", -0);
 mine = ft_printf("mine: %x\n", -0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %x\n", 0);
 mine = ft_printf("mine: %x\n", 0);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %x\n", INT_MAX);
 mine = ft_printf("mine: %x\n", INT_MAX);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %x\n", INT_MIN);
 mine = ft_printf("mine: %x\n", INT_MIN);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %x\n", INT_MIN - 1);
 mine = ft_printf("mine: %x\n", INT_MIN - 1);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %x\n", INT_MAX + 1);
 mine = ft_printf("mine: %x\n", INT_MAX + 1);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %%x 0000042 == |%x|\n", 0000042);
 mine = ft_printf("mine: %%x 0000042 == |%x|\n", 0000042);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %%x \t == |%x|\n", '\t');
 mine = ft_printf("mine: %%x \t == |%x|\n", '\t');
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

 orig =    printf("orig: %%x Lydie == |%x|\n", 'L'+'y'+'d'+'i'+'e');
 mine = ft_printf("mine: %%x Lydie == |%x|\n", 'L'+'y'+'d'+'i'+'e');
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);


  orig =    printf("orig: %%d 42 == %d\n", INT_MIN);
  mine = ft_printf("mine: %%d 42 == %d\n", INT_MIN);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

  orig =    printf("orig: %%4d 42 == |%4d|\n", 42);
  mine = ft_printf("mine: %%4d 42 == |%4d|\n", 42);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

  orig =    printf("orig: %%5d -42 == |%5d|\n", -42);
  mine = ft_printf("mine: %%5d -42 == |%5d|\n", -42);
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

  orig =    printf("orig: %s\n", "last test");
  mine = ft_printf("mine: %s\n", "last test");
printf(BLU"   orig: %d, mine: %d\n\n"RESET, orig, mine);

//orig =    printf("orig: %s\n", "Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autregens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Etalafinilla*bip*");



}
