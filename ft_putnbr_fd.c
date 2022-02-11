/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:18:22 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/09 18:59:32 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nn;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nn = (unsigned int)(n * -1);
	}
	else
		nn = (unsigned int)n;
	if (nn >= 10)
		ft_putnbr_fd((nn / 10), fd);
	ft_putchar_fd((char)(nn % 10 + '0'), fd);
}
