/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <hyeo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:13:48 by hyeo              #+#    #+#             */
/*   Updated: 2021/11/16 12:25:57 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

//void	f(int *cont)
//{
//	cont = 345;
//}

//int main()
//{
//	t_list	*hi = malloc(sizeof(t_list) * 2);
//	hi->content = 42;
//	hi->next = NULL;
//	ft_lstiter(hi, f);
//	printf("%d", hi->content);
//}
