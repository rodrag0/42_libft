/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponce-c <rponce-c@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:43:24 by rponce-c          #+#    #+#             */
/*   Updated: 2025/08/24 19:29:13 by rponce-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>

// void	*ft_memcpy(void *dst, const void *src, size_t n);

// int	main(void)
// {
// 	char	dst[] = "hola mundo";
// 	char	src[] = "adio";

// 	// int argc, char *argv[]
// 	// printf("%d", argc);
// 	// int i = 0;
// 	// while(argc--){
// 	//     printf("%s \n", argv[i]);
// 	//     i++;
// 	// }
// 	// printf("\n");
// 	// dst[] = "hola mundo";
// 	// src[] = "adio";
// 	printf("Original: %s\n", dst);
// 	ft_memcpy(dst, src, 1);
// 	printf("%s \n", dst);
// }

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*t_dst;
	const unsigned char	*t_src;
	size_t				i;

	t_src = (const unsigned char *)src;
	t_dst = (unsigned char *)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		t_dst[i] = t_src[i];
		i++;
		n--;
	}
	return (dst);
}
