/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:51:00 by auysal            #+#    #+#             */
/*   Updated: 2023/02/17 12:01:15 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_spaces(char *str, int *ptr)
{
	int	x;
	int	i;

	i = 0;
	x = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			x *= -1;
		i++;
	}
	*ptr = i;
	return (x);
}

int	ft_atoi(char *str)
{
	int	q;
	int	result;
	int	i;

	result = 0;
	q = ft_spaces(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= q;
	return (result);
}	
