/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:20:48 by issierra          #+#    #+#             */
/*   Updated: 2023/09/26 09:40:26 by issierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lst: un puntero a un nodo.
// f: la dirección de un puntero a una función usada
// en la iteración de cada elemento de la lista.
// del: un puntero a función utilizado para eliminar
// el contenido de un nodo, si es necesario.

// devuelve La nueva lista.
// NULL si falla la reserva de memoria.

// Itera la lista ’lst’ y aplica la función ’f’ al
// // contenido de cada nodo. Crea una lista resultante
// de la aplicación correcta y sucesiva de la función
// ’f’ sobre cada nodo. La función ’del’ se utiliza
// para eliminar el contenido de un nodo, si hace
// falta.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		aux = ft_lstnew((*f)(lst->content));
		if (!aux)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	return (new);
}

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
// {
// 	t_list	*new;
// 	t_list	*aux;

// 	if (lst)
// 	{
// 		new = ft_lstnew(f(lst->content));
// 		aux = new;
// 		while (lst->next)
// 		{
// 			lst = lst->next;
// 			new->next = ft_lstnew(f(lst->content));
// 			if (!new->next)
// 			{
// 				del(new->next);
// 				free(new->next);
// 				return (NULL);
// 			}
// 			new = new->next;
// 		}
// 		return (aux);
// 	}
// 	return (NULL);
// }