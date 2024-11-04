/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:05:23 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 06:05:37 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    char *last = NULL;
    char cc = (char)c;
    unsigned int i = 0;

    while (s[i])
    {
        if (s[i] == cc)
            last = (char *)&s[i];
        i++;
    }

    if (cc == '\0')
        return (char *)&s[i];

    return last;
}

