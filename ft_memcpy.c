/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:31:04 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 05:31:40 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cd;
	const unsigned char	*cp = (const unsigned char *)src;
	size_t				i;

	cd = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		cd[i] = cp[i];
		i++;
	}
	return (dest);
}
