/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:31:05 by rimartin          #+#    #+#             */
/*   Updated: 2021/09/14 19:31:14 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*convert_hexa(unsigned int n, int control)
{
	char			*res;
	unsigned int	len;

	if (n == 0)
		return (ft_strdup("0"));
	len = count_uni_hexa(n);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	res[len--] = '\0';
	while (n > 0)
	{
		if ((n % 16) < 10)
			res[len] = (n % 16) + '0';
		else if (control == 1)
			res[len] = (n % 16) + 55;
		else if (control == 0)
			res[len] = (n % 16) + 87;
		n = n / 16;
		len--;
	}
	return (res);
}
