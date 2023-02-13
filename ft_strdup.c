/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnazario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:02:47 by tnazario          #+#    #+#             */
/*   Updated: 2022/11/04 12:02:49 by tnazario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*s1;

	len = ft_strlen(s) + 1;
	s1 = malloc(len);
	if (s1 == NULL)
		return (NULL);
	ft_memcpy(s1, s, len);
	return (s1);
}
