/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:55:05 by fvillafr          #+#    #+#             */
/*   Updated: 2023/10/13 11:26:46 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
int main()
{
	char str[] = "Hola";
	int len = 1;
	//

	printf("Antes:%s\n", str);
	ft_bzero(str, len);
	printf("Después: %s", str);
	return (0);
}*/