/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:52:12 by issierra          #+#    #+#             */
/*   Updated: 2023/09/23 21:48:29 by issierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] != '\0'
				&& haystack[i + j] == needle[j] && (i + j) < len)
				j++;
			if (needle[j] == '\0' && j <= len)
				return ((char *)&haystack[i]);
			else
			{
				j = 0;
			}
		}
		i++;
	}
	i = 0;
	return (0);
}
