/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:52:55 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/01 11:03:43 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int	main(void)
{
	char	c;

	printf("Character: ");
	scanf("%c", &c);
	ft_putchar(c);
	return (0);
}
