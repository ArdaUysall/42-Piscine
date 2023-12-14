/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:04:45 by auysal            #+#    #+#             */
/*   Updated: 2023/02/02 18:13:30 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar2(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_putint(int num, int max)
{
	char	x;
	char	y;

	if (num <= 9)
	{
		x = num + 48;
		ft_putchar2('0', x);
	}
	else if (num <= max)
	{
		x = (num / 10) + 48;
		y = (num % 10) + 48;
		ft_putchar2 (x, y);
	}
}

void	ft_catint(int w, int q)
{
	ft_putint (w, 98);
	write(1, " ", 1);
	ft_putint (q, 99);
	if (w != 98 || q != 99)
		ft_putchar2 (',', ' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_catint (a, b);
			b++;
		}
		a++;
	}
}
