/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 01:13:46 by kael-ala          #+#    #+#             */
/*   Updated: 2023/09/28 13:10:34 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_len(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		return (-1);
	}
	while (min < max)
	{
		min++;
		i++;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	j = count_len(min, max);
	tab = malloc(sizeof(int) * j);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (i < j)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
