/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:27:06 by nplieger          #+#    #+#             */
/*   Updated: 2022/11/08 11:41:37 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strdup(const char *s)
{
	char		*ret;
	size_t		len;

	len = ft_strlen(s) + 1;
	ret = malloc(len * sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s, len);
	return (ret);
}
