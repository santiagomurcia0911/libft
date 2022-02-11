/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:06:42 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/05 16:50:01 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	limit(long long n, const char *s, int sign)
{
	long long	number_limit;

	number_limit = ((n * 10) + (*s - '0')) * sign;
	if (number_limit < -2147483648)
		return (0);
	else if (number_limit > 2147483647)
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	size_t		i1;
	long int	result;
	int			number_limit;
	int			sign;

	i1 = 0;
	result = 0;
	sign = 1;
	while (str[i1] == ' ' || str[i1] == '\n' || str[i1] == '\f'
		|| str[i1] == '\r' || str[i1] == '\t' || str [i1] == '\v')
		i1++;
	if (str[i1] == '+' || str[i1] == '-')
		if (str[i1++] == '-')
			sign *= -1;
	while (ft_isdigit(str[i1]))
	{
		number_limit = limit(result, str, sign);
		if (number_limit == 0 || number_limit == -1)
			return (number_limit);
		result = ((result * 10) + str[i1] - '0');
		i1++;
	}
	return (result * sign);
}
