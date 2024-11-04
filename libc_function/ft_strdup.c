/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:13:15 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 06:13:45 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup_str;
	int		i;

	i = 0;
	while (str[i])
		i++;
	dup_str = (char *)malloc(sizeof(char) * (i + 1));
	if (dup_str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}

