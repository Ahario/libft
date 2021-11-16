/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:22:19 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/16 12:10:03 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	findlength(int n)
{
	int			i;
	long long	place;

	i = 0;
	place = 1;
	while (place <= n)
	{
		place *= 10;
		i++;
	}
	if (n == 0)
		i = 1;
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*temp;
	int		neg;

	i = 0;
	neg = 1;
	if (n < 0)
	{
		neg = -1;
		n *= -1;
		i += 1;
	}
	i += findlength(n);
	temp = malloc(sizeof(char) * (i + 1));
	if (temp == NULL)
		return (NULL);
	temp[i] = '\0';
	while (i > 0)
	{
		temp[--i] = (n % 10) + '0';
		n /= 10;
	}
	if (neg == -1)
		temp[0] = '-';
	return (temp);
}

//int main()
//{
//	int n = -2147483647;
//	printf("%s\n", ft_itoa(n));
//}
