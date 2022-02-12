/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:08:01 by spena-mu          #+#    #+#             */
/*   Updated: 2022/01/25 18:29:36 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lens;
	char	*substring;
	size_t	i1;

	i1 = 0;
	lens = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len > lens)
		len = lens;
	if (start >= lens)
	{
		substring = (char *)malloc(1);
		if (substring == NULL)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	substring = (char *) malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	while (i1++ < start)
		s++;
	ft_strlcpy(substring, s, len + 1);
	return (substring);
}
