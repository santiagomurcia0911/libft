/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:06:20 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/11 18:12:32 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l1;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	l1 = ft_lstlast(*lst);
	l1->next = new;
}
