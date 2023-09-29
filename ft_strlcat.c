/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issierra <issierra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:34:23 by issierra          #+#    #+#             */
/*   Updated: 2023/09/18 10:37:51 by issierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	lendest;
	unsigned int	lensrc;
	unsigned int	i;
	unsigned int	k;
	unsigned int	j;

	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	j = 0;
	k = lendest;
	if (size > lendest)
	{
		while (src[i] != '\0' && j < size - lendest - 1)
		{
			dst[k] = src[i];
			k++;
			i++;
			j++;
		}
		dst[k] = '\0';
		return (lendest + lensrc);
	}
	return (lensrc + size);
}
