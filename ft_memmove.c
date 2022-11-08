/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:01:34 by nplieger          #+#    #+#             */
/*   Updated: 2022/11/08 09:09:03 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp_src;
	char		*temp_dest;

	temp_src = (char *)src;
	temp_dest = (char *)dest;
	if ((dest + n < src) || (src + n < dest))
	{
		while (n--)
			*temp_dest++ = *temp_src++;
	}
	else
	{
		temp_src += n - 1;
		temp_dest += n - 1;
		while (n--)
			*--temp_dest = *--temp_src;
	}
	return (dest);
}
