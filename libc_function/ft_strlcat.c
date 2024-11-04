/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:42:08 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 05:46:21 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	c;
	size_t	start_len;

	i = ft_strlen(dst);
	c = 0;
	start_l = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[c] && i < size - 1)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = 0;
	return (start_l + ft_strlen(src));
}
