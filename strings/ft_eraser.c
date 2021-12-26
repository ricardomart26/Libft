/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eraser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:45:26 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:24:28 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	count_set(char *str, char *set)
{
	int	i;
	int	x;
	int	ret;

	ret = 0;
	i = -1;
	while (str[++i])
	{
		x = -1;
		while (set[++x])
		{
			if (set[x] == str[i])
			{
				ret++;
				break ;
			}
		}
	}
	return (ret);
}

char	*ft_eraser(char *str, char *set, bool f)
{
	char	*ret;
	int		i;
	int		x;

	if (!str)
		return (NULL);
	ret = malloc(sizeof(char) * count_set(str, set) + 1);
	if (!ret)
		return (NULL);
	i = -1;
	while (*str)
	{
		x = -1;
		while (set[++x])
		{
			if (set[x] == *str && *str && str++)
				x = -1;
		}
		ret[++i] = *(str++);
	}
	if (f)
		free_with_return(str);
	ret[i] = '\0';
	return (ret);
}
