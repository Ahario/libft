/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:19:32 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/16 14:45:13 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	search;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	search = (unsigned char)c;
	if (!dst || !src)
		return (NULL);
	while (i < len)
	{
		dest[i] = source[i];
		if (source[i] == search)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
