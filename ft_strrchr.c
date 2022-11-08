/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:21:19 by nplieger          #+#    #+#             */
/*   Updated: 2022/11/07 19:48:37 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*str;

	str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		i--;
	}
	return (NULL);
}
