/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:09:20 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/16 14:15:13 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const set)
{
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	j = strlen(s1);
	if (s1 != '\0' && set != '\0')
	{
		while (s1[i] != '\0' && ft_strchr(set, s1[i]), i < j)
			i++;
		while (j - 1 > 0 && ft_strchr(set, s1[j - 1]), j > i)
			j--;
		temp = malloc(sizeof(char) * j - i + 1);
		if (temp != NULL)
			ft_strlcpy(temp, &s1[i], j - i + 1);
	}
	return (temp);
}
