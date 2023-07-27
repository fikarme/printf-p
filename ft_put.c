/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:38:32 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/27 15:49:26 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puts(char *s)
{
	int	l;
	int	i;

	l = 0;
	i = 0;
	if (!s)
	{
		l += ft_puts("(null)");
		return (l);
	}
	while (s[i])
	{
		l += ft_putc(s[i]);
		i++;
	}
	return (l);
}

int	ft_putu(unsigned int u)
{
	int		l;

	l = 0;
	if (u < 10)
		l += ft_putc(u + '0');
	else
	{
		l += ft_putu(u / 10);
		l += ft_putu(u % 10);
	}
	return (l);
}

int	ft_putn(int n)
{
	long	nbr;
	int		l;

	l = 0;
	nbr = n;
	if (nbr < 0)
	{
		l += ft_putc('-');
		nbr *= -1;
	}
	if (nbr < 10)
		l += ft_putc(nbr + '0');
	else
	{
		l += ft_putn(nbr / 10);
		l += ft_putn(nbr % 10);
	}
	return (l);
}

int	ft_puth(unsigned long h, char *p)
{
	int	l;

	l = 0;
	if (h >= 16)
		l += ft_puth(h / 16, p);
	l += ft_putc(p[h % 16]);
	return (l);
}

int	ft_putp(void *p)
{
	int	l;

	l = 0;
	l += ft_puts("0x");
	l += ft_puth((unsigned long)p, "0123456789abcdef");
	return (l);
}
