/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:01:27 by kael-ala          #+#    #+#             */
/*   Updated: 2023/09/26 01:29:56 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb / 2;
	if (nb > 100000)
	{
		i = nb / 200;
	}
	while (i > 1)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i--;
	}
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
	{
		return (2);
	}
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
