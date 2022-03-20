/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:28:58 by hyeo              #+#    #+#             */
/*   Updated: 2022/03/20 17:36:14 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_find_number_length(int content)
{
    long long	i;
    int			j;

	i = content;
	j = 0;
	if (content == 0)
		return (1);
	if (i < 0)
		i *= -1;
	while (i != 0)
	{
		i /= 10;
		j++;
	}
	return (j);
}

void	printf_digit(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	printf_number(int content)
{
	int			i;
	char	*str;

	i = 0;
	i += printf_find_number_length(content);
	str = ft_itoa(content);
	printf_digit(str);
	return (i);
}
