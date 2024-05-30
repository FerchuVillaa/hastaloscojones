/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:37:38 by fvillafr          #+#    #+#             */
/*   Updated: 2023/10/04 13:00:25 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (dst[0] == '\0' && src[0] == '\0')
		return (0);
	else if (dstsize == 0)
	{
		len = ft_strlen(src);
		return (len);
	}
	while (src[len] != '\0')
		len++;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
int main()
{
	char src[] = "holaaas";
	char dst[] = "ferchu";
	size_t dstsize = 4;

	printf ("Src vale: %s\n", src);
	//7 (tmñ cdn orgn)
	printf ("Dst vale: %s\n\n", dst);

	printf("ft_strlcpy: %zu ", ft_strlcpy(dst, src, dstsize));
	printf("strlcpy: %zu\n", strlcpy(dst, src, dstsize));
	return (0);
}*/