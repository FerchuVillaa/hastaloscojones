/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillafr <fvillafr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:19:43 by fvillafr          #+#    #+#             */
/*   Updated: 2023/09/16 16:46:42 by fvillafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	char	c;
	c = 's';
	int res;
	//1
	
	res = ft_isprint(c);
	printf("%d\n", res);
}*/