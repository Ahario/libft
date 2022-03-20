#include "ft_printf.h"

void printf_hexx_print_number(unsigned long long content, const char sign)
{
    char    number;

    if (content <= 9)
    {
        number = content + 48;
        write(1, &content, 1);
    }
    else
    {
        if (sign == "x")
        {
            number = content - 10 + 97;
            write(1, &number, 1);
        }
        else
        {
            number = content - 10 + 65;
            write(1, &number, 1);
        }
    }
}

int printf_hexx_find_length(unsigned long long content)
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

void printf_hexx_breakdown(unsigned long long content, const char sign)
{
    int i;

    i = 0;
    if(content >= 16)
    {
        printf_hexx_breakdown(content / 16, sign);
        printf_hexx_breakdown(content % 16, sign);
    }
    else
        printf_hexx_print_number(content, sign);
}

int printf_hexx(unsigned long long content, const char sign)
{
    int i;

    i = 0;
    if (content == 0)
        i += write(1, "0", 1);
    else
    {
        printf_hexx_breakdown(content, sign);
        i += printf_hexx_find_length(content);
    }
    return (i);
}