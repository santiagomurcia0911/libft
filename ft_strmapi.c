/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:16:06 by spena-mu          #+#    #+#             */
/*   Updated: 2022/01/26 18:38:19 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*str;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (0);
	index = 0;
	while (str[index])
	{
		str[index] = f(index, str[index]);
		index++;
	}
	return (str);
}
