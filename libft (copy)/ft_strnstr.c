/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:28:02 by fvillafr          #+#    #+#             */
/*   Updated: 2023/10/13 11:53:51 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i ++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str1[] = "aaxx"; //Cadena larga (haystack)
	char	str2[] = "xx"; //Cadena a buscar (needle)
	//xx (len 4) || null (len 3)
	size_t	len = 4;
	printf ("Mi funcion: %s", ft_strnstr((char *)str1, (char *)str2, len));
}*/

// El (size_t)ft_strlen(needle) + 1 >= len --> Para evitar el overlaping
