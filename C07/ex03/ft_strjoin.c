/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:44:52 by auysal            #+#    #+#             */
/*   Updated: 2023/02/24 21:31:05 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	total_length(int size, char **strs)
{
	int	index;
	int	length;

	index = 0;
	length = 0;
	while (index < size)
	{
		length += ft_str_length(strs[index]);
		index++;
	}
	return (length);
}

unsigned int	calc_total_size(int size, char **strs, char *sep)
{
	int	sep_len;
	int	str_len;
	int	total_size;

	sep_len = ft_str_length(sep);
	str_len = total_length(size, strs);
	total_size = (size - 1) * sep_len + str_len + 1;
	return (total_size);
}

unsigned int	ft_strclone(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*result;
	int		i;
	int		len;

	if (size == 0)
		return (malloc(0));
	total_size = calc_total_size(size, strs, sep);
	result = malloc(sizeof(char) * total_size);
	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strclone(result + len, strs[i], total_size);
		if (i != size - 1)
			len += ft_strclone(result + len, sep, total_size);
		i++;
	}
	result[total_size - 1] = 0;
	return (result);
}
