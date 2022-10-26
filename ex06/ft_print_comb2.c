/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:10:07 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/03 15:36:30 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_output(int number)
{
	char	first;
	char	second;

	first = (number / 10) % 10 + '0';
	second = number % 10 + '0';
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_output(x);
			write(1, " ", 1);
			ft_output(y);
			if (x < 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
