/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:49:20 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/03 14:19:34 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i1;
	size_t	sd;
	size_t	ss;

	sd = ft_strlen(dst);
	ss = ft_strlen(src);
	i1 = 0;
	if (dstsize <= sd)
		return (dstsize + ss);
	while (src[i1] != '\0' && sd < (dstsize - 1))
	{
		dst[sd] = src[i1];
		i1++;
		sd++;
	}
	dst[sd] = '\0';
	return (sd + ft_strlen(&src[i1]));
}
