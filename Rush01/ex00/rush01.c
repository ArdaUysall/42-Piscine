/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:31:56 by auysal            #+#    #+#             */
/*   Updated: 2023/02/09 15:33:25 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print(int count, char first_char, char middle_char, char end_char)
{
	int	i;

	i = 1;
	while (i <= count)
	{
		if (i == 1)
			ft_putchar (first_char);
		else if (i == count)
			ft_putchar (end_char);
		else
			ft_putchar (middle_char);
		i++;
	}
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x >= 1 && y >= 1)
	{
		while (i <= y)
		{
			if (i == 1)
				ft_print (x, '/', '*', '\\');
			else if (i == y)
				ft_print (x, '\\', '*', '/');
			else
				ft_print (x, '*', ' ', '*');
			i++;
		}
	}
}
