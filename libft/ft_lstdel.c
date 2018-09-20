/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:07:46 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:07:53 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ping;

	if (alst != NULL && *alst != NULL && (*del))
	{
		ping = *alst;
		while (ping)
		{
			del(ping->content, ping->content_size);
			free(ping);
			ping = ping->next;
		}
		*alst = NULL;
	}
}
