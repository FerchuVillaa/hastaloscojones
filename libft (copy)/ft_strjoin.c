/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:56:16 by fvillafr          #+#    #+#             */
/*   Updated: 2023/10/10 11:00:48 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*ptr;
	int		j;

	i = 0;
	j = 0;
	ptr = malloc (((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i ++;
	}
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j ++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	s1[] = "hala";
	char	s2[] = "madrid";
	//hala madrid
	//ft_strjoin(s1, s2);
	printf("%s", ft_strjoin(s1, s2));
}*/