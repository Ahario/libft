/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:12:11 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/19 16:02:13 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dst);
	if (srclen == 0)
		return (dstsize);
	dst += destlen;
	while (*src != '\0' && (destlen + i + 1) < dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '\0';
	if (dstsize < destlen)
		return (srclen + dstsize);
	return (srclen + destlen);
}
