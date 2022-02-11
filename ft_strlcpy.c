/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:10:06 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/05 17:10:11 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	while (src[i1] != '\0')
		i1++;
	if (dstsize != 0)
	{
		while (src[i2] != '\0' && i2 < (dstsize - 1))
		{
			dst[i2] = src[i2];
			i2++;
		}
		dst[i2] = '\0';
	}
	return (i1);
}
