/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:44:04 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:18:20 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "macros.h"

void	ft_error_msg(const char *str)
{
	ft_putstr_fd(str, 2);
	exit(ERROR);
}
