/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:51:43 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/23 12:56:35 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = NULL;
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	if ((unsigned char)c == 0)
		return ((char *)ptr);
	return (NULL);
}