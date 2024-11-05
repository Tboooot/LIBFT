/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:05:23 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/05 05:14:11 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*pos;

	pos = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			pos = s + i;
		i++;
	}
	if (s[i] == c)
		pos = s + i;
	return ((char *)pos);
}
