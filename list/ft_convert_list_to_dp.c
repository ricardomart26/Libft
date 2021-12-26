/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_list_to_dp.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:00:09 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:30:19 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "string.h"

char	**convert_list_to_dp(t_list *lista)
{
	char	**arr;
	int		i;

	arr = malloc((ft_lstsize((t_list *)lista) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = -1;
	while (lista != NULL)
	{
		arr[++i] = ft_strdup(lista->content);
		lista = lista->next;
	}
	arr[i + 1] = NULL;
	return (arr);
}
