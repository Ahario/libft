#include "ft_printf.h"

int printf_unsgiend_length(unsigned int content)
{
    int i;

    i = 0;
    while (content != 0)
    {
        content /= 10;
        i++;
    }
    return (i);
}

void printf_unsigned_itoa(unsigned int content)
{
    int i;
    char *str;

    i = printf_unsigned_length(content);
    str = malloc(sizeof(char) * (i + 1));
    if (!str)
        return (0);
    str[i] = '\0';
    i--;
    while (content != 0)
    {
        str[i] = (content / 10) + 48;
        content /= 10;
        i--;
    }
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    free(str);
}

int printf_unsigned(unsigned int content)
{
    int i;


    i = 0;
    if (content == 0)
        i += write(1, "0", 1);
    else
    {
        printf_unsigned_itoa(content);
        i += printf_unsigned_length(content);
    }
    return (i);
} 