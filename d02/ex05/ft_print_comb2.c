/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 19:14:24 by atrush            #+#    #+#             */
/*   Updated: 2016/09/29 19:29:38 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int n[2];

	n[0] = 0;
	while (n[0] <= 98)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 99)
		{
			ft_putchar(n[0] / 10 + '0');
			ft_putchar(n[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(n[1] / 10 + '0');
			ft_putchar(n[1] % 10 + '0');
			n[0] + n[1] != 98 + 99 && ft_putchar(',');
			n[0] + n[1] != 98 + 99 && ft_putchar(' ');
			n[1]++;
		}
		n[0]++;
	}
}
