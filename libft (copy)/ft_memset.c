/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:19:23 by fvillafr          #+#    #+#             */
/*   Updated: 2023/10/04 12:18:43 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[10] = "0123456789";
	int		c = 'a';
	size_t	len = 5;
    //aaaaa56789

	printf("Antes: %s\n", str);
	ft_memset(str, c, len);
	printf("Despues : %s\n", str);
	return (0);
}*/