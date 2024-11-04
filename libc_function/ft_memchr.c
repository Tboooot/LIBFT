/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:06:40 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 06:07:36 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    unsigned char uc = (unsigned char)c;
    size_t i = 0;

    while (i < n)
    {
        if (ptr[i] == uc)
            return (void *)(ptr + i);
        i++;
    }

    return NULL;
}

