/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaafrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:10:24 by zaafrani          #+#    #+#             */
/*   Updated: 2024/07/24 22:57:14 by zaafrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)

{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
