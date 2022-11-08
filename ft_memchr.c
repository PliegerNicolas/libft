/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:23:34 by nplieger          #+#    #+#             */
/*   Updated: 2022/11/08 09:37:23 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
