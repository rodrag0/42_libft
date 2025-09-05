/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponce-c <rponce-c@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:37:25 by rponce-c          #+#    #+#             */
/*   Updated: 2025/09/05 14:37:25 by rponce-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src) + 1;
	dstlen = dstsize;
	if (dstlen > 0)
	{
		if (srclen <= dstlen)
			ft_memcpy(dst, src, srclen);
		else
		{
			ft_memcpy(dst, src, dstlen - 1);
			dst[dstlen - 1] = '\0';
		}
	}
	return (srclen - 1);
}

