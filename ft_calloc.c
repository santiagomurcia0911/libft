/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:45:30 by spena-mu          #+#    #+#             */
/*   Updated: 2022/01/25 14:09:15 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	count_size;
	void	*dst;

	count_size = size * count;
	dst = malloc(count_size);
	if (!dst)
		return (0);
	ft_bzero(dst, count_size);
	return (dst);
}
