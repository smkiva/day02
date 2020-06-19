/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smkiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:46:37 by smkiva            #+#    #+#             */
/*   Updated: 2020/06/19 15:00:08 by smkiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
	write( 1, &c, 1);
}

void ft_print_comb(void)
{
	int num1, num2, num3;

	num1 = '0';
	num1 = '0' - 1;

	while( ++num1 <= '9')
	{
		num2 = num1;

		while( ++num2 <= '9')
		{
			num3 = num2;

			while( ++num3 <='9')
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);

				ft_putchar(',');
				ft_putchar(' ');


			}
		}
	}



}

