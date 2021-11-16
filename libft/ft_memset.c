/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:27:53 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/16 14:17:28 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)b;
	while (i != len)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
//int main()
//{
//	unsigned char b[10] = "abcdefghi";
//	int c = 41;
//	size_t len = 5;
//	printf("%s", ft_memset(b, c, len));
//}
