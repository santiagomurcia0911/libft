/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:54:15 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/10 18:23:14 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i1;
	int	desencadenar;

	i1 = 0;
	desencadenar = 0;
	while (*str)
	{
		if (*str != c && desencadenar == 0)
		{
			desencadenar = 1;
			i1++;
		}
		else if (*str == c)
			desencadenar = 0;
		str++;
	}
	return (i1);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i1;

	i1 = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i1++] = str[start++];
	word[i1] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i1;
	size_t	i2;
	int		i3;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i1 = 0;
	i2 = 0;
	i3 = -1;
	while (i1 <= ft_strlen(s))
	{
		if (s[i1] != c && i3 < 0)
			i3 = i1;
		else if ((s[i1] == c || i1 == ft_strlen(s)) && i3 >= 0)
		{
			split[i2++] = word_dup(s, i3, i1);
			i3 = -1;
		}
		i1++;
	}
	split[i2] = 0;
	return (split);
}
