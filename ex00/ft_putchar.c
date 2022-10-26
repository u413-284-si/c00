/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:42:46 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/01 10:52:16 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//1: output on device screen, count = 1: only show first 1 byte of buffer data 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
