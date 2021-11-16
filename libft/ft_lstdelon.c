/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelon.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:10:39 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/16 12:11:04 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lastdelone(t_list *lst, void (*del)(void *));
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}