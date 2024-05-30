/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:58:32 by fvillafr          #+#    #+#             */
/*   Updated: 2023/09/25 17:14:42 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
	char	c;
	c = 'a';
	int		res;
	//1

	res = ft_isalpha(c);
	printf ("%d\n", res);
	return (0);
}*/