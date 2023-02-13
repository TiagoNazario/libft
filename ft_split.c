/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnazario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:22:21 by tnazario          #+#    #+#             */
/*   Updated: 2022/11/11 19:22:23 by tnazario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char sep)
{
	int	word;
	int	flag;

	word = 0;
	flag = 0;
	while (*str)
	{
		if (*str != sep && flag == 0)
		{
			flag = 1;
			word++;
		}
		else if (*str == sep)
			flag = 0;
		str++;
	}
	return (word);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 1));
	while (start < finish)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**ptrs;	

	if (!s)
		return (NULL);
	ptrs = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !ptrs)
		return (0);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			ptrs[j++] = word_dup(s, index, i);
			index = -1;
		}
	}
	ptrs[j] = 0;
	return (ptrs);
}
