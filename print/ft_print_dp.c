/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:21:48 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:18:26 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_print_dp(void **r, int fd, int len)
{
	int	i;

	i = -1;
	if (r == NULL)
		return ;
	if (len == 0)
	{
		while (r[++i])
			ft_putendl_fd(r[i], fd);
	}
	else
	{
		while (++i < len)
			ft_putstr_fd(r[i], fd);
	}
}
