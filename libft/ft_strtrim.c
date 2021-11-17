/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:09:20 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/17 17:05:57 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	j = ft_strlen(s1);
	temp = NULL;
	if (s1[i] != '\0' && set[i] != '\0')
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

int main()
{
	char const *s1 = "abttttbc";
	char const *set = "abc";
	printf("%s\n", ft_strtrim(s1, set));	
}
