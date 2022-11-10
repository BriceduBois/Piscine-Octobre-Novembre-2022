/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdu-bois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:59:34 by bdu-bois          #+#    #+#             */
/*   Updated: 2022/11/10 13:54:35 by bdu-bois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = malloc(sizeof(**range) * (max - min));
	if (!ptr)
		return (0);
	i = 0;
	while (min < max)
	{
		ptr[i++] = min;
		min++;
	}
	*range = ptr;
	return (i);
}
