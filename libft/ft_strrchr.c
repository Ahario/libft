/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:06:45 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/16 14:21:34 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	total(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	target;
	char	*src;

	i = total(s);
	target = (unsigned char)c;
	src = (char *)s;
	while (i > 0)
	{
		if (src[i] == target)
			return (&((char *)s)[i]);
		i--;
	}
	if (src[i] == target)
		return (&((char *)s)[i]);
	return (0);
}

//int main()
//{
//	const char *s = "abcdef";
//	int c = 99;
//	printf("%s", ft_strrchr(s, c));
//}
