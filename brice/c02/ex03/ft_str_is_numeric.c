/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdu-bois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:46:03 by bdu-bois          #+#    #+#             */
/*   Updated: 2022/10/31 16:26:24 by bdu-bois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	if (!str)
		return (1);
	while (str[x])
	{
		if (str[x] < '0' || str[x] > '9')
		{
			return (0);
		}
		x++;
	}
	return (1);
}