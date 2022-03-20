#include "ft_printf.h"

void printf_hex_print_number(unsigned long long content)
{
    char    number;

    if (content <= 9)
    {
        number = content + 48;
        write(1, &number, 1);
    }
    else
    {
        number = content - 10 + 97;
        write(1, &number, 1);
    }
}

int printf_hex_find_length(unsigned long long content)
{
    int i;

    i = 0;
    while(content != 0)
    {
        content /= 16;
        i++;
    }
    return (i);
}

void printf_hex_find_address(unsigned long long content)
{
    int i;

    i = 0;
    if(content >= 16)
    {
        printf_hex_find_address(content / 16);
        printf_hex_find_address(content % 16);
    }
    else
            printf_hex_print_number(content);
}

int printf_hex(unsigned long long content)
{
    int i;

    i = 0;
    i += write(1, "0x", 2);
    if (content == 0)
        i += write(1, "0", 1);
    else
    {
        printf_hex_find_address(content);
        i += printf_hex_find_length(content);
    }
    return (i);
}