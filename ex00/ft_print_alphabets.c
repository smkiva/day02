/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabets.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smkiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 11:40:24 by smkiva            #+#    #+#             */
/*   Updated: 2020/06/19 12:39:05 by smkiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_putchar(char c)
{
	write(1, &c , 1);
}
void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

