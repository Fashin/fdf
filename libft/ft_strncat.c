/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:52:30 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/02 18:32:02 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*cur;

	cur = s1;
	while (*cur != '\0')
		cur++;
	while (*s2 != '\0' && n > 0)
	{
		*cur = *s2;
		cur++;
		s2++;
		n--;
	}
	*cur = '\0';
	return (s1);
}