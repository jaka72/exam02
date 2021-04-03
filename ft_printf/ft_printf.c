#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

struct s_values
{
	char *s;
	int d;
	unsigned int x;
} t_val;

struct s_counts
{
	int cp;
	int width;
	int prec;
	char spec;
} t_cnt;

struct s_flags
{
	int dot;
} t_fl;

int ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
	t_cnt.cp++;
}

void putandsub(int *n, char c)
{
	ft_putchar(c);  
	*n = *n - 1;
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void print_s()
{
	if (t_val.s == NULL)
	{
		t_val.s = "(null)";
		if (t_fl.dot == 0)
			t_cnt.prec = 6;
	}
	if (t_cnt.prec > ft_strlen(t_val.s) || t_cnt.prec < 0)
		t_cnt.prec = ft_strlen(t_val.s);
	while (t_cnt.width > t_cnt.prec)
		putandsub(&t_cnt.width, ' ');
	write(1, t_val.s, t_cnt.prec);
	t_cnt.cp = t_cnt.cp + t_cnt.prec;
}

int ft_getlen(int n)
{
	int i;

	i = 0;
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

void ft_putnbr(int num)
{
	unsigned int n;

	if (num == 0 && t_cnt.prec == 0)
		return ;
	if (num < 0)
		num = num * -1;
	n = (unsigned int)num;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void print_d()
{
	if (t_val.d < 0)
		t_cnt.width--;
	if (t_val.d == 0 && t_fl.dot == 0)
		t_cnt.prec = 1;
	if (t_cnt.prec < ft_getlen(t_val.d) && t_val.d != 0)
		t_cnt.prec = ft_getlen(t_val.d);
	while (t_cnt.width > t_cnt.prec)
		putandsub(&t_cnt.width, ' ');
	if (t_val.d < 0)
		ft_putchar('-');
	while (t_cnt.prec > ft_getlen(t_val.d))
		putandsub(&t_cnt.prec, '0');
	ft_putnbr(t_val.d);
}

int ft_getlen_hex(unsigned int x)
{
	int i;

	i = 0;
	while (x / 16)
	{
		i++;
		x = x / 16;
	}
	return (i + 1);
}

void store_hex(int *i, unsigned int x, int arr[])
{
	int rem;

	while (x / 16)
	{
		rem = x % 16;
		if (rem >= 10)
			arr[*i] = rem + 87;
		else
			arr[*i] = rem + '0';
		*i = *i + 1;
		x = x / 16;
	}
	if (x >= 10)
		arr[*i] = x + 87;
	else
		arr[*i] = x + '0';
}

void ft_putnbr_hex(unsigned int x)
{
	int i;
	int arr[20];

	i = 0;
	if (x == 0 && t_cnt.prec == 0)
		return ;
	store_hex(&i, x, arr);
	while (i >= 0)
	{
		ft_putchar(arr[i]);
		i--;
	}
}

void print_x(void)
{
	if (t_val.x == 0 && t_fl.dot == 0)
		t_cnt.prec = 1;
	if (t_cnt.prec < ft_getlen_hex(t_val.x) && t_val.x != 0)
		t_cnt.prec = ft_getlen_hex(t_val.x);
	while (t_cnt.width > t_cnt.prec)
		putandsub(&t_cnt.width, ' ');
	while (t_cnt.prec > ft_getlen_hex(t_val.x))
		putandsub(&t_cnt.prec, '0');
	ft_putnbr_hex(t_val.x);
}

void find_spec(char c, va_list args)
{
	if (c == 's')
	{
		t_val.s = va_arg(args, char*);
		t_cnt.spec = 's';
	}
	else if (c == 'd')
	{
		t_val.d = va_arg(args, int);
		t_cnt.spec = 'd';
	}
	else if (c == 'x')
	{
		t_val.x = va_arg(args, unsigned int);
		t_cnt.spec = 'x';
	}
	else if (c == '%')
	{
		t_val.s = "%";
		t_cnt.spec = '%';
	}
}

void reset()
{
	t_fl.dot = 0;
	t_cnt.width = 0;
	t_cnt.prec = -1;
	t_cnt.spec = '0';
}

void print_result(void)
{
	if (t_cnt.spec == 's')
		print_s();
	else if (t_cnt.spec == 'd')
		print_d();
	else if (t_cnt.spec == 'x')
		print_x();
	else if (t_cnt.spec == '%')
		print_s();
}

void check_flag(char c)
{
	if (c == '.')
	{
		t_fl.dot = 1;
		t_cnt.prec = 0;
	}
	if (ft_isdigit(c) && c != '0' && t_fl.dot == 0)
		t_cnt.width = t_cnt.width * 10 + c - '0';
	else if (c == '0' && t_cnt.width > 0 && t_fl.dot == 0)
		t_cnt.width = t_cnt.width * 10;
	else if (ft_isdigit(c) && c != '0' && t_fl.dot == 1)
		t_cnt.prec = t_cnt.prec * 10 + c - '0';
	else if (c == '0' && t_cnt.prec > 0 && t_fl.dot == 1)
		t_cnt.prec = t_cnt.prec * 10;
}


void process_char(const char **c)
{
	while (**c != 's' && **c != 'd' && **c != 'x')
	{
		if (**c == '%')
			return ;
		check_flag(**c);
		*c = *c + 1; 
	}
}

int ft_printf(const char *str, ...)
{
	va_list args;

	va_start(args, str);
	t_cnt.cp = 0;
	while (*str != '\0')
	{
		if (*str != '%')
			ft_putchar(*str);
		else if (*str == '%' && *(str + 1) == '%') 
		{
			ft_putchar('%');
			str++;
		}
		else if (*str == '%' && *(str + 1) != '%')
		{
			str++;
			reset();
			process_char(&str);
			find_spec(*str, args);
			print_result();
		}
		str++;
	}	
	va_end(args);
	return (t_cnt.cp);
}


