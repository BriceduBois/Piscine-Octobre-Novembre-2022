/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdu-bois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:24:22 by bdu-bois          #+#    #+#             */
/*   Updated: 2022/11/08 20:26:26 by bdu-bois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] < 'A' || str[x] > 'Z')
			return (0);
		x++;
	}
	return (1);
}
