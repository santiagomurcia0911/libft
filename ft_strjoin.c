/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:33:22 by spena-mu          #+#    #+#             */
/*   Updated: 2022/01/25 18:47:18 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1_s2;
	int		index1;
	int		index2;

	s1_s2 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !s1_s2)
		return (0);
	index1 = 0;
	while (s1[index1] != '\0')
	{
		s1_s2[index1] = s1[index1];
		index1++;
	}
	index2 = 0;
	while (s2[index2] != '\0')
		s1_s2[index1++] = s2[index2++];
	s1_s2[index1] = '\0';
	return (s1_s2);
}
