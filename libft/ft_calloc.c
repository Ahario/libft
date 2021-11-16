/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:24:58 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/16 14:12:11 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;
	size_t	i;

	temp = malloc(sizeof(count * size));
	i = 0;
	while (i < count)
	{
		((unsigned char *)temp)[i] = 0;
		i++;
	}	
	return (temp);
}
