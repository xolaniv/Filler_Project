/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:21:12 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:21:19 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_unputnbr_base(uintmax_t n, short int base, char big, t_str *pf)
{
	char		*bases;

	if (big)
		bases = "0123456789ABCDEF";
	else
		bases = "0123456789abcdef";
	if (n >= (unsigned short int)base)
	{
		ft_putnbr_base((n / base), base, big, pf);
		ft_putnbr_base((n % base), base, big, pf);
	}
	else if (n < (unsigned short int)base)
		write_to_buffer(pf, bases[n]);
}

void	ft_putnbr_base(intmax_t n, short int base, char big, t_str *pf)
{
	char		*bases;

	if (big)
		bases = "0123456789ABCDEF";
	else
		bases = "0123456789abcdef";
	if (n < 0)
	{
		write_to_buffer(pf, '-');
		if (n < -9223372036854775807)
		{
			write_to_buffer(pf, '9');
			n = -223372036854775808;
		}
		n = n * (-1);
	}
	if (n >= base)
	{
		ft_putnbr_base((n / base), base, big, pf);
		ft_putnbr_base((n % base), base, big, pf);
	}
	else if (n < base)
		write_to_buffer(pf, bases[n]);
}
