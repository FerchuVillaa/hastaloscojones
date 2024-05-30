/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:39:21 by fvillafr          #+#    #+#             */
/*   Updated: 2023/10/12 19:06:21 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	char			*s;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i ++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char cadena[] = "RealMadrid";
	char *puntero; 
	
	char	caracter = 'M';
	int	len = 7;
	//len 5 o + (Madrid) / len 4 o - (null) 

	puntero = (char *)ft_memchr( cadena, caracter, len);
	printf( "%s", puntero ); 
	return 0;
}*/