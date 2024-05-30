/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:13:00 by fvillafr          #+#    #+#             */
/*   Updated: 2023/10/04 13:24:48 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i ++;
	}
}

void	my_function(unsigned int i, char *s)
{
	printf("%d: %c\n", i, *s);
}

/*
int	main(void)
{
    char str[] = "Hello, world!";
	//H
	//E
	//...
	
    ft_striteri(str, &my_function);
    return (0);
}*/