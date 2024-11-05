/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:02:08 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/05 01:23:15 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	const char	*pos;

	pos = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			pos = str + i;
		i++;
	}
	if (str[i] == c)
		pos = str + i;
	return ((char *)pos);
}