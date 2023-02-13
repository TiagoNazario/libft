/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnazario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:36:09 by tnazario          #+#    #+#             */
/*   Updated: 2022/11/06 22:36:11 by tnazario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		n;
	int		c;

	c = 0;
	if (!s1 || !s2)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	while (*s1)
	{
		str[c] = *s1;
		c++;
		s1++;
	}
	while (*s2)
	{
		str[c] = *s2;
		c++;
		s2++;
	}
	str[c] = '\0';
	return (str);
}
