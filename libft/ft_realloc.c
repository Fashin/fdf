/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:37:39 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/16 16:50:12 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	if (!(new = (void *)malloc(ft_strlen(ptr) * sizeof(void) + size)))
		return (0);
	ft_memcpy(new, ptr, ft_strlen(ptr) + size);
	free(ptr);
	ft_putstr((char *)new);
	return (new);
}
