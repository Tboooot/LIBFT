/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:37:11 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 05:41:49 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			index;
	unsigned char	*buffer;

	c = (unsigned char)c;
	buffer = (unsigned char *)dest;
	index = 0;
	while (index < n)
	{
		buffer[index] = c;
		index++;
	}
	return (dest);
}
