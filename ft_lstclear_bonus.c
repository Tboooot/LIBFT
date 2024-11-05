/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:38:23 by mtarza            #+#    #+#             */
/*   Updated: 2024/11/05 02:31:12 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*two;

	if (*lst == NULL || !del)
		return ;
	while (*lst)
	{
		two = (*lst);
		(*lst) = (*lst)->next;
		ft_lstdelone(two, del);
	}
	*lst = NULL;
}
