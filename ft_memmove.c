/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:31:55 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 05:35:12 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dp;
	const unsigned char	*sp = (const unsigned char *)src;
	size_t				i;

	dp = (unsigned char *)dst;
	i = 0;
	if (sp < dp && dp < sp + len)
	{
		sp += len;
		dp += len;
		while (len--)
			*--dp = *--sp;
	}
	else
	{
		while (i < len)
		{
			*dp++ = *sp++;
			i++;
		}
	}
	return (dst);
}
