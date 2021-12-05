/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 05:35:34 by ricardo           #+#    #+#             */
/*   Updated: 2021/12/05 14:32:34 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static bool	search_rest_sp(char *str, char *word, size_t w_size, size_t i)
{
	int	x;

	x = 0;
	while (x < w_size)
	{
		if (str[i++] != word[x++])
			return (false);
	}
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
		return (true);
	return (false);
}

static bool	search_rest(char *str, char *word, size_t w_size, size_t i)
{
	int	x;

	x = 0;
	while (x < w_size)
	{
		if (str[i++] != word[x++])
			return (false);
	}
	return (true);
}

char	*search_word(char *str, char *word, bool debug)
{
	int	size;
	int	i;

	if (!str || !word)
	{
		error_msg("ERROR in search_word, str or word is empty\n");
		return (0);
	}
	size = ft_strlen(word);
	if (size == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (word[0] == str[i])
			if (search_rest(str, word, size, i))
				return (&str[i]);
		i++;
	}
	if (debug == 1)
		error_msg("ERROR in search_word, didnt find word in str\n");
	return (NULL);
}

char	*search_word_sp(char *str, char *word, bool debug)
{
	int	size;
	int	i;

	if (!str || !word)
	{
		error_msg("ERROR in search_word, str or word is empty\n");
		return (0);
	}
	size = ft_strlen(word);
	if (size == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (word[0] == str[i])
			if (search_rest_sp(str, word, size, i))
				return (&str[i]);
		i++;
	}
	if (debug == 1)
		error_msg("ERROR in search_word, didnt find word in str\n");
	return (NULL);
}
