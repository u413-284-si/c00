/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:06:01 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/03 18:00:28 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printseq(int nb)
{
	char	c;

	while (nb != 0)
	{
		c = nb % 10 + '0';
		nb /= 10;
		write(1, &c, 1);
	}
}

void	ft_putnbr(int nb)
{
	int	rev;
	int	modulo;

	rev = 0;
	while (nb != 0)
	{
		modulo = nb % 10;
		rev = rev * 10 + modulo;
		nb /= 10;
	}
	if (rev > 0)
	{
		printseq(rev);
	}
	else
	{
		rev = -rev;
		write(1, "-", 1);
		printseq(rev);
	}
}
