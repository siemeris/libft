/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:18:17 by issierra          #+#    #+#             */
/*   Updated: 2023/09/26 09:36:02 by issierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lst: la dirección de un puntero a un nodo.
// del: un puntero a función utilizado para eliminar
// el contenido de un nodo.
// Elimina y libera el nodo ’lst’ dado y todos los
// consecutivos de ese nodo, utilizando la función
// ’del’ y free(3).
// Al final, el puntero a la lista debe ser NULL.

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_elem;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_elem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_elem;
	}
	*lst = NULL;
}

	// t_list *next_elem;

	// if (!lst || !del)
	//     return ;
	// next_elem = *lst;
	// while (*lst)
	// {
	//     next_elem = next_elem->next;
	//     del(next_elem->content);
	//     free(lst);
	//     *lst = next_elem;
	// }