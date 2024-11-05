/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:42:08 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/05 05:19:35 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	getlength(const char *dst)
{
	if (dst == NULL)
		return (0);
	return (ft_strlen(dst));
}

static void	copy(char *dst, const char *src, size_t *i, size_t size)
{
	size_t	c;

	c = 0;
	while (src[c] && *i < size - 1)
	{
		dst[*i] = src[c];
		(*i)++;
		c++;
	}
	if (dst != NULL)
		dst[*i] = '\0';
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	start_l;

	if (src == NULL)
		return (0);
	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	i = getlength(dst);
	start_l = i;
	if (size <= i)
		return (size + ft_strlen(src));
	copy(dst, src, &i, size);
	return (start_l + ft_strlen(src));
}
