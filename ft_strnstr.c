/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:21:54 by spena-mu          #+#    #+#             */
/*   Updated: 2022/01/25 18:15:06 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i1] != '\0')
	{
		i2 = 0;
		while (haystack[i1 + i2] == needle[i2] && (i1 + i2) < len)
		{
			if (haystack[i1 + i2] == '\0' && needle[i2] == '\0')
				return ((char *)&haystack[i1]);
			i2++;
		}
		if (needle[i2] == '\0')
			return ((char *)haystack + i1);
		i1++;
	}
	return (0);
}
