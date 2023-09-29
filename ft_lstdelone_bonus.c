/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:44:14 by issierra          #+#    #+#             */
/*   Updated: 2023/09/26 09:37:31 by issierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lst: el nodo a liberar.
// del: un puntero a la función utilizada para liberar
// el contenido del nodo.

// Toma como parámetro un nodo ’lst’ y libera la
// memoria del contenido utilizando la función ’del’
// dada como parámetro, además de liberar el nodo. La
// memoria de ’next’ no debe liberarse.

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

	// if (lst)
	//     lst = lst -> next;
	// del(lst);
	// free(lst);