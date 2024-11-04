/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:25:05 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 06:25:42 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int int_len(long nbr)
{
    int count = (nbr <= 0) ? 1 : 0;
    while (nbr != 0)
    {
        nbr /= 10;
        count++;
    }
    return count;
}

char *ft_itoa(int n)
{
    long nbr = n;
    int len = int_len(nbr);
    char *result = malloc((len + 1) * sizeof(char));
    if (!result)
        return NULL;
    result[len] = '\0';
    if (nbr < 0)
        nbr = -nbr;
    if (nbr == 0)
        result[--len] = '0';
    while (nbr != 0)
    {
        result[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    if (n < 0)
        result[0] = '-';
    return result;
}

