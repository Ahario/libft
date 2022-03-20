#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		printf_find_number_length(int content);
void	printf_digit(char *str);
int		printf_number(int content);
void	printf_hex_print_number(unsigned long long content);
int		printf_hex_find_length(unsigned long long content);
void	printf_hex_find_address(unsigned long long content);
int		printf_hex(unsigned long long content);
void	printf_hexx_print_number(unsigned long long content, const char sign);
int		printf_hexx_find_length(unsigned long long content);
void	printf_hexx_breakdown(unsigned long long content, const char sign);
int		printf_hexx(unsigned long long content, const char sign);
int		printf_unsgiend_length(unsigned int content);
void	printf_unsigned_itoa(unsigned int content);
int		printf_unsigned(unsigned int content);
int		printf_single(int string);
int		printf_string(char *string);
int		find_type(const char content, va_list ap);
int		ft_printf(const char *content, ...);

#endif
