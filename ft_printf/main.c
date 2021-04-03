#include <stdio.h>


int main(void)
{
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
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
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";
	char *s_hidden = "hidden";

	orig =    printf("Simple input test\n");
	mine = ft_printf("Simple input test\n");
	
    orig =    printf("%d, %d, %d, %d, %d, %s, %d, %d, %d, %x, %x\n", i, j, k, l, m, n, c, c, j, j, j); //T2
    mine = ft_printf("%d, %d, %d, %d, %d, %s, %d, %d, %d, %x, %x\n", i, j, k, l, m, n, c, c, j, j, j); //T2
	
	orig =    printf("%1d, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d); //T4
	mine = ft_printf("%1d, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d); //T4
	
    orig =    printf("%2d, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d); //T5
    mine = ft_printf("%2d, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d); //T5
	
    orig =    printf("%3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d); //T6
    mine = ft_printf("%3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d); //T6
	
    orig =    printf("%4d, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d); //T7
    mine = ft_printf("%4d, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d); //T7
	
    orig =    printf("%5d, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", i, j, k, l, m, c, e, d); //T8
    mine = ft_printf("%5d, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", i, j, k, l, m, c, e, d); //T8
	
    orig =    printf("%6d, %6d, %6d, %6d, %6d, %6d, %6d, %6d\n", i, j, k, l, m, c, e, d); //T9
    mine = ft_printf("%6d, %6d, %6d, %6d, %6d, %6d, %6d, %6d\n", i, j, k, l, m, c, e, d); //T9
	
    orig =    printf("%7d, %7d, %7d, %7d, %7d, %7d, %7d, %7d\n", i, j, k, l, m, c, e, d); //T10
    mine = ft_printf("%7d, %7d, %7d, %7d, %7d, %7d, %7d, %7d\n", i, j, k, l, m, c, e, d); //T10
	
    orig =    printf("%8d, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d); //T11
    mine = ft_printf("%8d, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d); //T11
	
    orig =    printf("%.d, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); //T12
    mine = ft_printf("%.d, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); //T12
	
    orig =    printf("%.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); //T13
    mine = ft_printf("%.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); //T13
	
	orig =    printf("%.d, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); //T20
	mine = ft_printf("%.d, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); //T20
	
	orig =    printf("%1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d); //T23
	mine = ft_printf("%1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d); //T23
	
    orig =    printf("%.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); //T24
    mine = ft_printf("%.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); //T24
	
    orig =    printf("%1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); //T25
    mine = ft_printf("%1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); //T25
	
    orig =    printf("%1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d); //T33
    mine = ft_printf("%1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d); //T33
	
    orig =    printf("%12.12d, %12.12d\n", -42, 42); //T179
    mine = ft_printf("%12.12d, %12.12d\n", -42, 42); //T179
	
	orig =    printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); //T180
	mine = ft_printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); //T180
	
    orig =    printf("%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); //T181
    mine = ft_printf("%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); //T181
	
    orig =    printf("%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); //T182
    mine = ft_printf("%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); //T182
	
    orig =    printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); //T183
    mine = ft_printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); //T183
	
    orig =    printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); //T184
    mine = ft_printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); //T184
	
    orig =    printf("%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); //T185
    mine = ft_printf("%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); //T185
	
    orig =    printf("%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); //T186
    mine = ft_printf("%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); //T186
	
    orig =    printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); //T186
    mine = ft_printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); //T186
	
    orig =    printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); //T186
    mine = ft_printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); //T186
	
    orig =    printf("%d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e); //T214
    mine = ft_printf("%d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x, %d, %x, %x\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e); //T214
	
    orig =    printf("%x, %x, %x, %x\n", 209590960, 207038912, 1, 0); //T347
    mine = ft_printf("%x, %x, %x, %x\n", 209590960, 207038912, 1, 0); //T347
	
    orig =    printf("%%, \t, \\, \", \', +");
    mine = ft_printf("%%, \t, \\, \", \', +");
	
    orig =    printf("%%%dbada%s%%**%s**-d%%0*d%12s0*@\n", h, "bada", r, p, r, r, i, r, i, r, i);
    mine = ft_printf("%%%dbada%s%%**%s**-d%%0*d%12s0*@\n", h, "bada", r, p, r, r, i, r, i, r, i);

//                                         h        bada        r                  
	orig =    printf("%% [%d] bada [%s] %% ** [%s] **-d %% 0*d  [%12s]  0*@\n", h, "bada", r, p, r, r, i, r, i, r, i);
	mine = ft_printf("%% [%d] bada [%s] %% ** [%s] **-d %% 0*d  [%12s]  0*@\n", h, "bada", r, p, r, r, i, r, i, r, i);

	orig =    printf("%d, %d, %d, %d, %d, %d, %d, %x, %x\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	mine = ft_printf("%d, %d, %d, %d, %d, %d, %d, %x, %x\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);

	orig =    printf("%d, %d, %12d, %3d, %1d, %1d, %2d, %4d, %5d, %3d\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	mine = ft_printf("%d, %d, %12d, %3d, %1d, %1d, %2d, %4d, %5d, %3d\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	
    orig =    printf("%2s, %.s, %4s, %2.4s, %8.12s, %3s, %8s, %2s, %.s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
    mine = ft_printf("%2s, %.s, %4s, %2.4s, %8.12s, %3s, %8s, %2s, %.s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	
    orig =    printf("%2s, %.s, %4s, %2.4s, %8.12s, %3s, %8s, %2s, %.s, %.0s, %.1s, %.2s, %.4s, %.8s\n", p,p,p,p,p,p,p,p,p,p,p,p,p,p);
    mine = ft_printf("%2s, %.s, %4s, %2.4s, %8.12s, %3s, %8s, %2s, %.s, %.0s, %.1s, %.2s, %.4s, %.8s\n", p,p,p,p,p,p,p,p,p,p,p,p,p,p);
	// ^ Theoriquement un comportement indefini mais testé par la moulinette
    
    orig =    printf("(null)");
    mine = ft_printf("(null)");
	
    orig =    printf("");
    mine = ft_printf("");
	

	

/* -----------------------------------------------------------------------------
** 						%s STRING TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
orig =    printf("hello, %s.\n", "gavin");
mine = ft_printf("hello, %s.\n", "gavin");

orig =    printf("%s\n", "testing testing");
mine = ft_printf("%s\n", "testing testing");

orig =    printf("%s%s\n", "hello", "world");
mine = ft_printf("%s%s\n", "hello", "world");

orig =    printf("..%s stuff %s\n", "a", "b");
mine = ft_printf("..%s stuff %s\n", "a", "b");

orig =    printf("this %s is empty\n", "");
mine = ft_printf("this %s is empty\n", "");

orig =    printf("this %s is %s\n", "hello", "");
mine = ft_printf("this %s is %s\n", "hello", "");

orig =    printf("this %s is %s\n", "", "hello");
mine = ft_printf("this %s is %s\n", "", "hello");

orig =    printf("%s%s%s\n", "1", "2", "3's a charm");
mine = ft_printf("%s%s%s\n", "1", "2", "3's a charm");

orig =    printf("%32s\n", "abc");
mine = ft_printf("%32s\n", "abc");

orig =    printf("%16s\n", "nark nark");
mine = ft_printf("%16s\n", "nark nark");

//String specifiers - no modifiers

//String specifiers with field_width, space- or zero-padded
orig =    printf("");
mine = ft_printf("");

orig =    printf("%5s\n", "goes over");
mine = ft_printf("%5s\n", "goes over");

//String specifiers with precision
orig =    printf("%.7s\n", "hello");
mine = ft_printf("%.7s\n", "hello");

orig =    printf("%.3s\n", "hello");
mine = ft_printf("%.3s\n", "hello");

orig =    printf("%.s\n", "hello");
mine = ft_printf("%.s\n", "hello");

orig =    printf("%.0s\n", "hello");
mine = ft_printf("%.0s\n", "hello");

orig =    printf("%.3s%.2s\n", "holla", "bitch");
mine = ft_printf("%.3s%.2s\n", "holla", "bitch");

orig =    printf("%.2s%.7s\n", "hello", "world");
mine = ft_printf("%.2s%.7s\n", "hello", "world");

orig =    printf("%.7s%.2s\n", "hello", "world");
mine = ft_printf("%.7s%.2s\n", "hello", "world");

orig =    printf("%.5s%7s\n", "yo", "boi");
mine = ft_printf("%.5s%7s\n", "yo", "boi");

//String specifiers with both precision and field width
orig =    printf("%7.5s\n", "yolo");
mine = ft_printf("%7.5s\n", "yolo");

orig =    printf("%7.5s\n", "bombastic");
mine = ft_printf("%7.5s\n", "bombastic");

orig =    printf("%7.7s%7.7s\n", "hello", "world");
mine = ft_printf("%7.7s%7.7s\n", "hello", "world");

orig =    printf("%3.7s%7.7s\n", "hello", "world");
mine = ft_printf("%3.7s%7.7s\n", "hello", "world");

orig =    printf("%7.7s%3.7s\n", "hello", "world");
mine = ft_printf("%7.7s%3.7s\n", "hello", "world");

orig =    printf("%3.7s%3.7s\n", "hello", "world");
mine = ft_printf("%3.7s%3.7s\n", "hello", "world");

orig =    printf("%7.3s%7.7s\n", "hello", "world");
mine = ft_printf("%7.3s%7.7s\n", "hello", "world");

orig =    printf("%3.3s%7.7s\n", "hello", "world");
mine = ft_printf("%3.3s%7.7s\n", "hello", "world");

orig =    printf("%7.3s%3.7s\n", "hello", "world");
mine = ft_printf("%7.3s%3.7s\n", "hello", "world");

orig =    printf("%3.3s%3.7s\n", "hello", "world");
mine = ft_printf("%3.3s%3.7s\n", "hello", "world");

orig =    printf("%7.7s%7.3s\n", "hello", "world");
mine = ft_printf("%7.7s%7.3s\n", "hello", "world");

orig =    printf("%3.7s%7.3s\n", "hello", "world");
mine = ft_printf("%3.7s%7.3s\n", "hello", "world");

orig =    printf("%7.7s%3.3s\n", "hello", "world");
mine = ft_printf("%7.7s%3.3s\n", "hello", "world");

orig =    printf("%3.7s%3.3s\n", "hello", "world");
mine = ft_printf("%3.7s%3.3s\n", "hello", "world");

orig =    printf("%7.3s%7.3s\n", "hello", "world");
mine = ft_printf("%7.3s%7.3s\n", "hello", "world");

orig =    printf("%3.3s%7.3s\n", "hello", "world");
mine = ft_printf("%3.3s%7.3s\n", "hello", "world");

orig =    printf("%7.3s%3.3s\n", "hello", "world");
mine = ft_printf("%7.3s%3.3s\n", "hello", "world");

orig =    printf("%3.3s%3.3s\n", "hello", "world");
mine = ft_printf("%3.3s%3.3s\n", "hello", "world");

orig =    printf("%3s%3s\n", "hello", "world");
mine = ft_printf("%3s%3s\n", "hello", "world");

//String specifiers - NULL strings
orig =    printf("hello, %s.", NULL);
mine = ft_printf("hello, %s.", NULL);

orig =    printf("%s\n", NULL);
mine = ft_printf("%s\n", NULL);

orig =    printf("%32s\n", NULL);
mine = ft_printf("%32s\n", NULL);

orig =    printf("%2s\n", NULL);
mine = ft_printf("%2s\n", NULL);


//String specifiers with precision
orig =    printf("%.9s\n", "NULL");
mine = ft_printf("%.9s\n", "NULL");

orig =    printf("%.3s\n", "NULL");
mine = ft_printf("%.3s\n", "NULL");

orig =    printf("%.s\n", "NULL");
mine = ft_printf("%.s\n", "NULL");

orig =    printf("%.0s\n", "NULL");
mine = ft_printf("%.0s\n", "NULL");

//String s_hidden tests
orig =    printf("hi low\0don't print me lol\0\n"); /// ?????????????????????
mine = ft_printf("hi low\0don't print me lol\0\n"); /// ?????????????????????

orig =    printf("%s\n", s_hidden);
mine = ft_printf("%s\n", s_hidden);

// width pad
orig =    printf("%3s\n", s_hidden);
mine = ft_printf("%3s\n", s_hidden);

orig =    printf("%9s\n", s_hidden);
mine = ft_printf("%9s\n", s_hidden);

// precision no width
orig =    printf("%.s\n", s_hidden);
mine = ft_printf("%.s\n", s_hidden);

orig =    printf("%.9s\n", s_hidden);
mine = ft_printf("%.9s\n", s_hidden);

// precision  0 before number
orig =    printf("%.03s\n", s_hidden);
mine = ft_printf("%.03s\n", s_hidden);

orig =    printf("%.09s\n", s_hidden);
mine = ft_printf("%.09s\n", s_hidden);

orig =    printf("%.03s\n", NULL);   // 95
mine = ft_printf("%.03s\n", NULL);   // 95

orig =    printf("%.09s\n", NULL);
mine = ft_printf("%.09s\n", NULL);

orig =    printf("%.00s\n", "\0");
mine = ft_printf("%.00s\n", "\0");

orig =    printf("%.01s\n", "\0");
mine = ft_printf("%.01s\n", "\0");

orig =    printf("%.03s\n", "\0");
mine = ft_printf("%.03s\n", "\0");

orig =    printf("%.09s\n", "\0");
mine = ft_printf("%.09s\n", "\0");

// width  no precision
orig =    printf("%3.s\n", s_hidden);
mine = ft_printf("%3.s\n", s_hidden);

orig =    printf("%10.s\n", s_hidden);
mine = ft_printf("%10.s\n", s_hidden);

orig =    printf("%3.s\n", NULL);
mine = ft_printf("%3.s\n", NULL);

orig =    printf("%10.s\n", NULL);
mine = ft_printf("%10.s\n", NULL);

orig =    printf("%1.s\n", "\0");
mine = ft_printf("%1.s\n", "\0");

orig =    printf("%2.s\n", "\0");
mine = ft_printf("%2.s\n", "\0");

orig =    printf("%9.s\n", "\0");
mine = ft_printf("%9.s\n", "\0");

// width  precision 1
orig =    printf("%3.1s\n", s_hidden);
mine = ft_printf("%3.1s\n", s_hidden);

orig =    printf("%10.1s\n", s_hidden);
mine = ft_printf("%10.1s\n", s_hidden);

orig =    printf("[%3.1s]\n", NULL);  // 110
mine = ft_printf("[%3.1s]\n", NULL);  // 110

orig =    printf("[%9.1s]\n", NULL);   // 111
mine = ft_printf("[%9.1s]\n", NULL);   // 111

// width  exact precision
orig =    printf("%3.6s\n", s_hidden);
mine = ft_printf("%3.6s\n", s_hidden);

orig =    printf("%20.6s\n", s_hidden);
mine = ft_printf("%20.6s\n", s_hidden);

orig =    printf("%3.6s\n", NULL);
mine = ft_printf("%3.6s\n", NULL);

orig =    printf("%20.6s\n", NULL);
mine = ft_printf("%20.6s\n", NULL);

orig =    printf("%3.6s\n", "\0");
mine = ft_printf("%3.6s\n", "\0");

orig =    printf("%6.6s\n", "\0");
mine = ft_printf("%6.6s\n", "\0");


/* -----------------------------------------------------------------------------
** 						%d INTEGER TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Signed integers - no modifers
orig =    printf("this %d number\n", 17);
mine = ft_printf("this %d number\n", 17);

orig =    printf("this %d number\n", -267);
mine = ft_printf("this %d number\n", -267);

orig =    printf("this %d number\n", 0);
mine = ft_printf("this %d number\n", 0);

orig =    printf("%d\n", 3);
mine = ft_printf("%d\n", 3);

orig =    printf("%d\n", -1);
mine = ft_printf("%d\n", -1);

orig =    printf("%d\n", 0);
mine = ft_printf("%d\n", 0);

orig =    printf("%d\n",  2147483647);
mine = ft_printf("%d\n",  2147483647);

orig =    printf("%d\n", (int)(-2147483678));
mine = ft_printf("%d\n", (int)(-2147483678));

//Signed integers with field width
orig =    printf("%7d\n", 33);
mine = ft_printf("%7d\n", 33);

orig =    printf("%7d\n", -14);
mine = ft_printf("%7d\n", -14);

orig =    printf("%3d\n", 0);
mine = ft_printf("%3d\n", 0);

orig =    printf("%5d\n", 52625);
mine = ft_printf("%5d\n", 52625);

orig =    printf("%5d\n", -2562);
mine = ft_printf("%5d\n", -2562);

orig =    printf("%4d\n", 94827);
mine = ft_printf("%4d\n", 94827);

orig =    printf("%4d\n", -2464);
mine = ft_printf("%4d\n", -2464);

//signed integers with precision
orig =    printf("%.5d\n", 2);
mine = ft_printf("%.5d\n", 2);

orig =    printf("%.6d\n", -3);
mine = ft_printf("%.6d\n", -3);

orig =    printf("%.3d\n", 0);
mine = ft_printf("%.3d\n", 0);

orig =    printf("%.4d\n", 5263);
mine = ft_printf("%.4d\n", 5263);

orig =    printf("%.4d\n", -2372);
mine = ft_printf("%.4d\n", -2372);

orig =    printf("%.3d\n", 13862);
mine = ft_printf("%.3d\n", 13862);

orig =    printf("%.3d\n",-23646);
mine = ft_printf("%.3d\n",-23646);



//Signed integers with field width and precision
orig =    printf("%8.5d\n", 34);
mine = ft_printf("%8.5d\n", 34);

orig =    printf("%10.5d\n", -216);
mine = ft_printf("%10.5d\n", -216);

orig =    printf("%8.5d\n", 0);
mine = ft_printf("%8.5d\n", 0);

orig =    printf("%8.3d\n", 8375);
mine = ft_printf("%8.3d\n", 8375);

orig =    printf("%8.3d\n", -8473);
mine = ft_printf("%8.3d\n", -8473);

orig =    printf("%3.7d\n", 3267);
mine = ft_printf("%3.7d\n", 3267);

orig =    printf("%3.7d\n", -2375);
mine = ft_printf("%3.7d\n", -2375);

orig =    printf("%3.3d\n", 6983);
mine = ft_printf("%3.3d\n", 6983);

orig =    printf("%3.3d\n", -8462);
mine = ft_printf("%3.3d\n", -8462);



//Signed integers - zero precision zero value
orig =    printf("%.0d\n", 0);
mine = ft_printf("%.0d\n", 0);

orig =    printf("%.d\n", 0);
mine = ft_printf("%.d\n", 0);

orig =    printf("%5.0d\n", 0);
mine = ft_printf("%5.0d\n", 0);

orig =    printf("%5.d\n", 0);
mine = ft_printf("%5.d\n", 0);



	

/* -----------------------------------------------------------------------------
** 						%x HEXADECIMAL LOWERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Hexadecimal lowers - no modifers
 orig =    printf("this %x number\n", 17); // 174
 mine = ft_printf("this %x number\n", 17); // 174

 orig =    printf("this %x number\n", 0);
 mine = ft_printf("this %x number\n", 0);

 orig =    printf("%x\n", 3);
 mine = ft_printf("%x\n", 3);

 orig =    printf("%x\n", 4294967295u);
 mine = ft_printf("%x\n", 4294967295u);

//Hexadecimal lowers with field width
 orig =    printf("%7x\n", 33);
 mine = ft_printf("%7x\n", 33);

 orig =    printf("%3x\n", 0);
 mine = ft_printf("%3x\n", 0);

 orig =    printf("%5x\n", 52625);
 mine = ft_printf("%5x\n", 52625);

 orig =    printf("%2x\n", 94827);
 mine = ft_printf("%2x\n", 94827);

//Hexadecimal lowers with precision
 orig =    printf("%.5x\n", 21);
 mine = ft_printf("%.5x\n", 21);

 orig =    printf("%.3x\n", 0);
 mine = ft_printf("%.3x\n", 0);

 orig =    printf("%.4x\n", 5263);
 mine = ft_printf("%.4x\n", 5263);

 orig =    printf("%.3x\n", 938862);
 mine = ft_printf("%.3x\n", 938862);


//Hexadecimal lowers with field width and precision
 orig =    printf("%8.5x\n", 34);
 mine = ft_printf("%8.5x\n", 34);

 orig =    printf("%8.5x\n", 0);
 mine = ft_printf("%8.5x\n", 0);

 orig =    printf("%8.3x\n", 8375);
 mine = ft_printf("%8.3x\n", 8375);

 orig =    printf("%2.7x\n", 3267);
 mine = ft_printf("%2.7x\n", 3267);

 orig =    printf("%3.3x\n", 6983);
 mine = ft_printf("%3.3x\n", 6983);


//Hexadecimal lower - zero precision zero value
 orig =    printf("%.0x\n", 0);
 mine = ft_printf("%.0x\n", 0);

 orig =    printf("%.x\n", 0);
 mine = ft_printf("%.x\n", 0);

 orig =    printf("%5.0x\n", 0);
 mine = ft_printf("%5.0x\n", 0);

 orig =    printf("%5.x\n", 0);
 mine = ft_printf("%5.x\n", 0);



/* -----------------------------------------------------------------------------
** 					NO CRASH / NO SEGFAULT TESTS (NOT REQUIRED)
** ---------------------------------------------------------------------------*/
//No-crash-no-segfault test

  orig =    printf("[%d]");
  mine = ft_printf("[%d]");

  orig =    printf("[%x]");
  mine = ft_printf("[%x]");

  orig =    printf("%1$s\n", NULL);
  mine = ft_printf("%1$s\n", NULL);

  orig =    printf("% s\n", NULL);
  mine = ft_printf("% s\n", NULL);

  orig =    printf("%23s\n", NULL);
  mine = ft_printf("%23s\n", NULL);

  orig =    printf("%.s\n", NULL);
  mine = ft_printf("%.s\n", NULL);

  orig =    printf("%d\n", NULL);
  mine = ft_printf("%d\n", NULL);

  orig =    printf("%x\n", NULL);
  mine = ft_printf("%x\n", NULL);

  orig =    printf("%s\n", NULL);
  mine = ft_printf("%s\n", NULL);



/* -----------------------------------------------------------------------------
** 							MOULINETTE TESTS - MANDATORY
** ---------------------------------------------------------------------------*/



char *str = NULL;

 orig =    printf(" pouet %s !!\n", "camembert");
 mine = ft_printf(" pouet %s !!\n", "camembert");

 orig =    printf("%s !\n", "Ceci n'est pas un \0 exercice !\n");
 mine = ft_printf("%s !\n", "Ceci n'est pas un \0 exercice !\n");

 orig =    printf("%s!\n", "Ceci n'est toujours pas un exercice !\n");
 mine = ft_printf("%s!\n", "Ceci n'est toujours pas un exercice !\n");

 orig =    printf("%s!\n", str);
 mine = ft_printf("%s!\n", str);


 orig =    printf("%d\n", 42);
 mine = ft_printf("%d\n", 42);

 orig =    printf("Kashim a %d histoires à raconter\n", 1001);
 mine = ft_printf("Kashim a %d histoires à raconter\n", 1001);

 orig =    printf("Il fait au moins %d\n", -8000);
 mine = ft_printf("Il fait au moins %d\n", -8000);

 orig =    printf("%d\n", -0);
 mine = ft_printf("%d\n", -0);

 orig =    printf("%d\n", 0);
 mine = ft_printf("%d\n", 0);

 orig =    printf("%d\n", INT_MAX);
 mine = ft_printf("%d\n", INT_MAX);

 orig =    printf("%d\n", INT_MIN);
 mine = ft_printf("%d\n", INT_MIN);

 orig =    printf("%d\n", INT_MIN - 1);
 mine = ft_printf("%d\n", INT_MIN - 1);

 orig =    printf("%d\n", INT_MAX + 1);
 mine = ft_printf("%d\n", INT_MAX + 1);

 orig =    printf("%%d 0000042 == |%d|\n", 0000042);
 mine = ft_printf("%%d 0000042 == |%d|\n", 0000042);

 orig =    printf("%%d \t == |%d|\n", '\t');
 mine = ft_printf("%%d \t == |%d|\n", '\t');

 orig =    printf("%%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');
 mine = ft_printf("%%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');

 orig =    printf("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %s\n", 100, "Ly", "replaced p");
 mine = ft_printf("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %s\n", 100, "Ly", "replaced p");



 orig =    printf("%x\n", 42);
 mine = ft_printf("%x\n", 42);

 orig =    printf("Kashim a %x histoires à raconter\n", 1001);
 mine = ft_printf("Kashim a %x histoires à raconter\n", 1001);

 orig =    printf("Il fait au moins %x\n", -8000);
 mine = ft_printf("Il fait au moins %x\n", -8000);

 orig =    printf("%x\n", -0);
 mine = ft_printf("%x\n", -0);

 orig =    printf("%x\n", 0);
 mine = ft_printf("%x\n", 0);

 orig =    printf("%x\n", INT_MAX);
 mine = ft_printf("%x\n", INT_MAX);

 orig =    printf("%x\n", INT_MIN);
 mine = ft_printf("%x\n", INT_MIN);

 orig =    printf("%x\n", INT_MIN - 1);
 mine = ft_printf("%x\n", INT_MIN - 1);

 orig =    printf("%x\n", INT_MAX + 1);
 mine = ft_printf("%x\n", INT_MAX + 1);

 orig =    printf("%%x 0000042 == |%x|\n", 0000042);
 mine = ft_printf("%%x 0000042 == |%x|\n", 0000042);

 orig =    printf("%%x \t == |%x|\n", '\t');
 mine = ft_printf("%%x \t == |%x|\n", '\t');

 orig =    printf("%%x Lydie == |%x|\n", 'L'+'y'+'d'+'i'+'e');
 mine = ft_printf("%%x Lydie == |%x|\n", 'L'+'y'+'d'+'i'+'e');


  orig =    printf("%%d 42 == %d\n", INT_MIN);
  mine = ft_printf("%%d 42 == %d\n", INT_MIN);

  orig =    printf("%%4d 42 == |%4d|\n", 42);
  mine = ft_printf("%%4d 42 == |%4d|\n", 42);
  
  orig =    printf("%%5d -42 == |%5d|\n", -42);
  mine = ft_printf("%%5d -42 == |%5d|\n", -42);

  orig =    printf("%s\n", "last test\n");
  mine = ft_printf("%s\n", "last test\n");

//orig =    printf("%s\n", "Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Etalafinilla*bip*");



}