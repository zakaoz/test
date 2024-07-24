/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaafrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:54:37 by zaafrani          #+#    #+#             */
/*   Updated: 2024/07/24 17:21:35 by zaafrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_reverse_alphabet(void)

{
	char i = 'z';
	{
		while(i >= 'a')
		{
			write(1, &i, 1);
			i--;
		}
	}
}
int main()

{
	ft_print_reverse_alphabet();
}
