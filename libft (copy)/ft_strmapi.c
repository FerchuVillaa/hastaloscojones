/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:44:39 by fvillafr          #+#    #+#             */
/*   Updated: 2023/09/21 17:15:06 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i ++;
	}
	str[i] = '\0';
	return (str);
}

char	letter_to_upcase(unsigned int i, char str)
{
	(void) i;
	if (str == 32)
		return (str);
	return (str - 32);
}
/*
int	main(void)
{
	char *str = "hola tio";
	//HOLA TIO
	printf("The original string is %s\n", str);
	char *result = ft_strmapi(str, letter_to_upcase);
	printf("%s\n", result);
	return 0;
}*/