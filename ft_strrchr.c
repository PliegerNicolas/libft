/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:21:19 by nplieger          #+#    #+#             */
/*   Updated: 2022/11/08 13:19:26 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	size_t		revi;
	char		*str;

	str = (char *)s;
	revi = ft_strlen(str);
	while (revi--)
	{
		if (str[revi] == (char)c)
			return (str + revi);
	}
	return (NULL);
}
