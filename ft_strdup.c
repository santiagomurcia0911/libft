/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:19:54 by spena-mu          #+#    #+#             */
/*   Updated: 2022/01/25 15:56:11 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *) malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	ft_memcpy (s2, s1, ft_strlen(s1) +1);
	return (s2);
}
