/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:41:09 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/06 09:49:38 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


/* This doesn't work for the min int -2147483648 -> seg fault while conversion
into positive value 2147483648*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
            write(1, "-2147483648", 11);
			return ;
		}		
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main(void)
{
	ft_putnbr(-214747); //min -2147483648, max 2147483647
	return (0);
}
