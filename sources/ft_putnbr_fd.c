/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:24:19 by nplieger          #+#    #+#             */
/*   Updated: 2022/11/14 14:53:03 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_putnbr_fd(int n, int fd)
{
	size_t	count = 0;

	if (n == -2147483648)
	{
		count += ft_putnbr_fd((n / 10), fd);
		count += ft_putnbr_fd(-(n % 10), fd);
	}
	else
	{
		if (n < 0)
		{
			count += ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n >= 10)
		{
			count += ft_putnbr_fd(n / 10, fd);
			count += ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			count += ft_putchar_fd(n + '0', fd);
		}
	}

	return count;
}
