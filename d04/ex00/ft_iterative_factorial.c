/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 21:41:49 by atrush            #+#    #+#             */
/*   Updated: 2016/10/01 21:42:42 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;

	a = 1;
	if ((nb >= 0) && (nb < 13))
	{
		if (nb == 0)
		{
			return (a);
		}
		while (nb > 0)
		{
			a = a * nb;
			nb--;
		}
		return (a);
	}
	else
	{
		return (0);
	}
}
