/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:54:49 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/09 16:43:35 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i1;

	if (s)
	{
		i1 = 0;
		while (s[i1])
		{
			ft_putchar_fd(s[i1], fd);
			i1++;
		}
	}
}
