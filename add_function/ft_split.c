/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:24:33 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 06:24:52 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	len = 0, i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			len++;
		while (s[i] != c && s[i])
			i++;
	}
	return (len);
}

static void	free_memory(char **strs, size_t n)
{
	while (n > 0)
		free(strs[--n]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	size_t	i = 0, j, len = word_count(s, c), nadu = 0;
	char	**strs = (char **)malloc(sizeof(char *) * (len + 1));
	if (!s || !strs)
		return (NULL);
	while (s[i] && nadu != len)
	{
		while (s[i] == c && s[i])
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		if (!(strs[nadu] = (char *)malloc(sizeof(char) * (j + 1))))
			return (free_memory(strs, nadu), NULL);
		j = 0;
		while (s[i] != c && s[i])
			strs[nadu][j++] = s[i++];
		strs[nadu++][j] = 0;
	}
	return (strs[nadu] = NULL, strs);
}

