/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 00:09:57 by kael-ala          #+#    #+#             */
/*   Updated: 2023/09/28 00:40:12 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = min;
	if (min >= max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	while (i <= max)
	{
		arr[i - min] = i;
		i++;
	}
	return (arr);
}
