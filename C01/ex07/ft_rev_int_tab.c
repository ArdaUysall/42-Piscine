/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:53:32 by auysal            #+#    #+#             */
/*   Updated: 2023/02/09 17:00:45 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	swap;

	index = 0;
	while (index < (size / 2))
	{
		swap = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = swap;
		index++;
	}
}
