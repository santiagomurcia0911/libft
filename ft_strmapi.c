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
	unsigned int	i1;
	char			*str;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (0);
	i1 = 0;
	while (str[i1])
	{
		str[i1] = f(i1, str[i1]);
		i1++;
	}
	return (str);
}
