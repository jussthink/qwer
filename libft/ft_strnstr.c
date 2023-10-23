/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:49:18 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/23 13:00:04 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *h_ptr;
	char *n_ptr;
	size_t remaining;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		h_ptr = (char *)haystack;
		n_ptr = (char *)needle;
		remaining = len;
		while (*h_ptr && *n_ptr && *h_ptr == *n_ptr && remaining > 0)
		{
			h_ptr++;
			n_ptr++;
			remaining--;
		}
		if (*n_ptr == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}