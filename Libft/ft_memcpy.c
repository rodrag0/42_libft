/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponce-c <rponce-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:43:24 by rponce-c          #+#    #+#             */
/*   Updated: 2025/08/17 16:46:28 by rponce-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

// int	main(void)
// {
// 	char	dst[];
// 	char	src[];

// 	// int argc, char *argv[]
// 	// printf("%d", argc);
// 	// int i = 0;
// 	// while(argc--){
// 	//     printf("%s \n", argv[i]);
// 	//     i++;
// 	// }
// 	// printf("\n");
// 	dst[] = "hola mundo";
// 	src[] = "adio";
// 	ft_memcpy(dst, src, 4);
// 	printf("%s", dst);
// }

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char   *t_dst;
	const unsigned char *t_src;
	*t_src = (const unsigned char *)src;
	*t_dst = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	int i = 0;

	while (n--)
	{
		*(t_dst + i) = *(t_src + i);
		i++;
	}
	return (dst);
}