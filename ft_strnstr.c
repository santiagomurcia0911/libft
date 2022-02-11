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
	size_t	index;
	size_t	c;

	index = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[index] != '\0')
	{
		c = 0;
		while (haystack[index + c] == needle[c] && (index + c) < len)
		{
			if (haystack[index + c] == '\0' && needle[c] == '\0')
				return ((char *)&haystack[index]);
			c++;
		}
		if (needle[c] == '\0')
			return ((char *)haystack + index);
		index++;
	}
	return (0);
}
