/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:41:05 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:24:50 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int	ft_strlen_range(const char *str, size_t st, size_t end)
{
	int	i;

	if (st + end >= (size_t)ft_strlen(str))
		exit(1);
	if (st == 0 && end == 0)
		return (ft_strlen(str));
	i = 0;
	if (end == 0)
	{
		while (str[st + i] != '\0')
			i++;
		return (i);
	}
	while (str[st + i] != '\0' && i + st < end)
		i++;
	return (i);
}

int	ft_strlen_c(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

int	ft_strlen_dp(const char	**s1)
{
	int	ret;

	ret = 0;
	while (s1[ret])
		ret++;
	return (ret);
}
