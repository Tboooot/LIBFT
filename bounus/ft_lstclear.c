/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:38:23 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/04 06:38:39 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	if (*lst == NULL || !del)
		return ;
	while (*lst)
	{
		cur = (*lst);
		(*lst) = (*lst)->next;
		ft_lstdelone(cur, del);
	}
	*lst = NULL;
}
