/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplay.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:31:03 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/30 16:48:27 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdisplay(t_list *list)
{
	while (list)
	{
		ft_putstr((char *)list->content);
		ft_putstr(" => ");
		ft_putnbr((int)list->content_size);
		ft_putchar('\n');
		list = list->next;
	}
	ft_putchar('\n');
}
