/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:19:33 by fvillafr          #+#    #+#             */
/*   Updated: 2023/10/10 14:55:07 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len --;
		}
	}
	return (dst);
}

/*
int	main(void)
{
    char	src[] = "Ferchu";
    char	dst[] = "Javi";
	//Favi
    size_t	len;

    len = 1;
    printf("Before memmove dst = %s, src = %s\n", dst, src);
    ft_memmove(src, src+2 , len);
    printf("After memmove dst = %s\n", src);
    return (0);
}*/