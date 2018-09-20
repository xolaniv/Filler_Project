/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:18:24 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:22:08 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(int c, int fd)
{
	unsigned char	code[4];

	if (c <= 127)
		write(fd, &c, 1);
	else if (c <= 2047)
	{
		code[0] = 192 | ((c >> 6) & 31);
		code[1] = 128 | (c & 63);
		write(fd, code, 2);
	}
	else if (c <= 65535)
	{
		code[0] = 224 | ((c >> 12) & 15);
		code[1] = 128 | ((c >> 6) & 63);
		code[2] = 128 | (c & 63);
		write(fd, code, 3);
	}
	else if (c <= 1114111)
	{
		code[0] = 240 | ((c >> 18) & 7);
		code[1] = 128 | ((c >> 12) & 63);
		code[2] = 128 | ((c >> 6) & 63);
		code[3] = 128 | (c & 63);
		write(fd, code, 4);
	}
}