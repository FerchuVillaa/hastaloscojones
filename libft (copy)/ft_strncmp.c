/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:50:17 by fvillafr          #+#    #+#             */
/*   Updated: 2023/09/26 20:13:46 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "abcd";
	char	str2[] = "abc";
	int		len;
    //100 (dif lts)

	len = 5;
	printf("La funcion ORIGINAL de strncmp da: %d\n", strncmp(str1, str2, len));
	ft_strncmp(str1, str2, len);
	printf("La funcion MIA de strncmp da: %d", ft_strncmp(str1, str2, len));
}*/