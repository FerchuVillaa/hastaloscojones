/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 22:07:06 by fvillafr          #+#    #+#             */
/*   Updated: 2023/09/26 13:22:13 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (!ptr)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	array1[] = "jav";
	char	*p;

	//jav en *p
	printf ("String en el array1 es: %s\n", array1);
	p = ft_strdup(array1);
	printf ("String en *p es: %s\n", p);
}*/