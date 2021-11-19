/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:40:13 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/19 12:29:10 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char const str, char charset)
{
	if (str == charset)
		return (1);
	return (0);
}

int	findsecond(char const *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !(check(str[i], charset)))
		i++;
	return (i);
}

int	findfirst(char const *str, char charset)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (*str)
	{
		while (*str && check(*str, charset))
			str++;
		i = findsecond(str, charset);
		str += i;
		if (i)
			total++;
	}
	return (total);
}

char	*stringcopy(char const *str, int j)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (j + 1));
	if (!dest)
		return (0);
	while (i != j && str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		total;
	char	**dest;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	total = findfirst(s, c);
	dest = (char **)malloc(sizeof(char *) * (total + 1));
	if (!dest)
		return (0);
	while (i < total)
	{
		while (check(*s, c))
			s++;
		j = findsecond(s, c);
		dest[i] = stringcopy(s, j);
		s += j;
		i++;
	}
	dest[total] = 0;
	return (dest);
}
//int main()
//{
//	char const *s = "hiJmyJnameJisJAllan";
//	char c  = 'J';
//	int i = 0;
//	char **answer = ft_split(s, c);
//	while (answer[i] != 0)
//	{
//		printf("%s\n", answer[i]);
//		i++;
//	}
//	system("leaks a.out");
//}
