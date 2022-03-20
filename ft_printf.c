#include "ft_printf.h"

int printf_single(int string)
{
	write(1, &string, 1);
	return (1);
}

int printf_string(char *string)
{
	int	i;

	i = 0;
	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while(string[i] != '\0')
	{
		write(1, &string[i], 1);
		i++; 
	}
	return (i);
}

int find_type(const char content, va_list ap)
{
	int	word_count;

	if (content == 'c')
		word_count += printf_single(va_arg(ap, int));
	else if (content == 's')
		word_count += printf_string(va_arg(ap, char *);
	else if (content == 'p')
		word_count += printf_hex(va_arg(ap, unsigned long long));
	else if (content == 'd' || content[i] == 'i')
		word_count += printf_number(va_arg(ap, int));
	else if (content === 'u')
		word_count += printf_unsigned(va_arg(ap, unsigned int));
	else if (content == 'x' || content[i] == 'X')
		word_count += printf_hexx(va_arg(ap, unsigned long long), content);
	else if (content == '%')
		word_count += write(1, "%", 1);

	return (word_count);
}

int ft_printf(const char *content, ...)
{
	int	i;
	int	word_count;
	va_list	ap;

	i = 0;
	word_count = 0;
	if (!content)
		return(NULL);
	va_start(ap, content);
	while(content[i] != '\0')
	{
		if (content[i] == '%')
		{
			i++;
			find_type(content[i] ,ap);
		}
		else
			word_count += write(1, &content[i], 1);
		i++;	
	}
	va_end(ap);
	return(word_count); 
}
