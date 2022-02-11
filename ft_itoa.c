/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:45:05 by spena-mu          #+#    #+#             */
/*   Updated: 2022/01/26 18:13:44 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sizeitoa(long num)
{
	size_t	size;

	if (num < 0)
		size = 1;
	else
		size = 0;
	while (1)
	{
		num /= 10;
		size++;
		if (num == 0)
			break ;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	number;
	char	*array;
	size_t	size;

	number = n;
	size = ft_sizeitoa(n);
	array = malloc((size +1) * sizeof(char));
	if (!array)
		return (NULL);
	if (number < 0)
	{
		array[0] = '-';
		number *= -1;
	}
	array[size] = '\0';
	while (1)
	{
		array[size - 1] = (number % 10) + '0';
		number /= 10;
		size--;
		if (number == 0)
			break ;
	}
	return (array);
}
