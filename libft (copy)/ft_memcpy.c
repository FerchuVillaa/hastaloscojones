/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:23:40 by fvillafr          #+#    #+#             */
/*   Updated: 2023/10/10 13:35:03 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	return (dest);
}
/*
int main()
{
	char	src[] = "Ferchu";
	char	dest[] = "Javi";
	int		n = 1;
	//Favi

	printf ("Dest vale: %s\n", dest);
	ft_memcpy (dest, src, n);
	printf ("Dest ahora vale: %s\n", dest);
    
	return (0);
}*/