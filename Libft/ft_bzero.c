/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponce-c <rponce-c@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 00:13:52 by rponce-c          #+#    #+#             */
/*   Updated: 2025/09/03 15:42:21 by rponce-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n--)
	{
		*(temp) = 0;
		temp++;
	}
}

// int main(void) {
//     char str[50] = "Hello, World!";
//     ft_bzero(str+6, 5);
//     printf("%s\n", str);
//     return (0);
// }
