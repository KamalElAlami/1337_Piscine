/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:47:23 by kael-ala          #+#    #+#             */
/*   Updated: 2023/10/04 03:41:16 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}