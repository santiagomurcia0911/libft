/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:08:36 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/04 15:31:46 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i1;
	char	*cd;
	char	*cs;

	cs = (char *)src;
	cd = (char *)dst;
	i1 = 0;
	if (!dst && !src)
		return (0);
	while (i1 < n)
	{
		cd[i1] = cs[i1];
		i1++;
	}
	return (dst);
}
