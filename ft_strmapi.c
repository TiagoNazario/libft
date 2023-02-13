/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnazario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:46:21 by tnazario          #+#    #+#             */
/*   Updated: 2022/11/10 21:46:27 by tnazario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptrs;
	int		i;

	if (!s || !f)
		return (NULL);
	ptrs = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptrs)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptrs[i] = f(i, s[i]);
		i++;
	}
	ptrs[i] = '\0';
	return (ptrs);
}
