/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:41:46 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/05 17:07:00 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i1;

	i1 = 0;
	while (i1 < n)
	{
		if (((unsigned char *)s)[i1] == (unsigned char)c)
			return (((unsigned char *)s) + i1);
		i1++;
	}
	return (NULL);
}
