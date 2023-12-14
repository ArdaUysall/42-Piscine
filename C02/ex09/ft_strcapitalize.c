/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:16:27 by auysal            #+#    #+#             */
/*   Updated: 2023/02/11 13:03:39 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	x1;

	index = 0;
	x1 = 1;
	ft_strlowcase(str);
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (x1 == 1)
			{
				str[index] -= 32;
				x1 = 0;
			}
		}
		else if (str[index] >= '0' && str[index] <= '9')
			x1 = 0;
		else
			x1 = 1;
		index++;
	}
	return (str);
}
