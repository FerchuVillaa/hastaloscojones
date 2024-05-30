/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:51:47 by fvillafr          #+#    #+#             */
/*   Updated: 2023/09/25 18:32:53 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last_occurrence;

	last_occurrence = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			last_occurrence = (char *)&str[i];
		i ++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (last_occurrence);
}
/*
int	main(void)
{
	char	str[] = "molamundo";
	int		c = 'm';
    //mundo
    
	printf ("%s\n", ft_strrchr(str, c));
	return (0);
}*/