/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:05:09 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/01 14:09:46 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Int is converted to char type by assigning to char type
// Start counting from character 0 
void	ft_print_numbers(void)
{
	int		digit;
	char	character;

	digit = 0;
	while (digit <= 9)
	{
		character = digit + '0';
		write(1, &character, 1);
		digit++;
	}
}
