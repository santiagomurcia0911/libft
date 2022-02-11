/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:09:28 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/05 19:05:36 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i1;
	int				i2;

	i1 = 0;
	i2 = 0;
	while ((i1 < n) && !i2 && (s1[i1] != '\0') && (s2[i1] != '\0'))
	{
		i2 = (unsigned char)s1[i1] - (unsigned char)s2[i1];
		i1++;
	}
	if (i1 < n && !i2 && (s1[i1] == '\0' || s2[i1] == '\0'))
		i2 = (unsigned char)s1[i1] - (unsigned char)s2[i1];
	return (i2);
}
