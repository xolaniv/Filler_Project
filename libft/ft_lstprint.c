/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:10:15 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:10:19 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *list)
{
	size_t i;

	i = 0;
	if (list)
	{
		while (list)
		{
			ft_putstr(ft_itoa(i));
			ft_putchar(':');
			ft_putstr((char *)(list->content));
			ft_putchar('\n');
			list = list->next;
			i++;
		}
	}
}
