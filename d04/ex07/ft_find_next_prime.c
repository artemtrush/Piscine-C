/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 22:06:17 by atrush            #+#    #+#             */
/*   Updated: 2016/10/01 22:09:22 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (i < nb && i <= 46341)
	{
		if (nb % i != 0)
			i++;
		else
		{
			return (ft_find_next_prime(nb + 1));
		}
	}
	return (nb);
}
