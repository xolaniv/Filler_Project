/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:02:42 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:02:48 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	int			x;
	size_t		i;
	long long	num;

	x = 1;
	i = 0;
	num = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			&& str[i] != '\0')
		i++;
	(str[i] == '-') ? x = -1 : 0;
	(str[i] == '+' || str[i] == '-') ? i++ : 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	(num < 0 && x == -1) ? num = 0 : 0;
	(num < 0 && x == 1) ? num = -1 : 0;
	return ((int)(num * x));
}