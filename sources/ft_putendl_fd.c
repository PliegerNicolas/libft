/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:18:43 by nplieger          #+#    #+#             */
/*   Updated: 2022/11/12 11:55:54 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_putendl_fd(char *s, int fd)
{
	size_t	count = 0;
	if (s)
	{
		count += ft_putstr_fd(s, fd);
		count += ft_putchar_fd('\n', fd);
	}

	return count;
}
