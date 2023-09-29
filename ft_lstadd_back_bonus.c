/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:07:18 by issierra          #+#    #+#             */
/*   Updated: 2023/09/26 09:33:57 by issierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// **lst es el puntero al primer nodo de la lista
// *lst es el principio de la lista

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
