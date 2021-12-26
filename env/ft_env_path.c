/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_path.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:44:16 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:31:40 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"
#include "string.h"

char	*ft_env_path(char **envp)
{
	int	x;

	if (!envp)
		return (NULL);
	x = -1;
	while (envp[++x])
	{
		if (!ft_strncmp("PATH", envp[x], 4))
			return (envp[x] + 5);
	}
	return (NULL);
}
