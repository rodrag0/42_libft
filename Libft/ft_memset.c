/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponce-c <rponce-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 22:21:25 by rponce-c          #+#    #+#             */
/*   Updated: 2025/08/17 15:02:54 by rponce-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len--)
	{
		*tmp = (unsigned char)c;
		tmp++;
	}
	return (b);
}
// int main(void) {
//     char str[50] = "Hello, World!";
//     ft_memset(str, 65, 5);
//     printf("%s\n", str); // Expected output: "***** World!"
//     return (0);
// }
// -----------
// #include <stdio.h>

// void *ft_memset(void *b, int c, size_t len)
// {

//     unsigned char *tmp;
//     tmp = (unsigned char *)b;
//     int i = 0;
//     while(len--){

//         *(tmp + i) = (unsigned char)c;
//         i++;

//     }

//     return(b);
// }

// int main(void) {
//     char str[50] = "Hello, World!";
//     ft_memset(str, 65, 5);
//     printf("%s\n", str); // Expected output: "***** World!"
//     return (0);
// }

// #include <stdio.h>

// void *ft_memset(void *b, int c, size_t len)
// {
//     int i = 0;
//     while(len--){

//         *((unsigned char *)b + i) = (unsigned char)c;
//         i++;

//     }
//     return(b);
// }
// #include <stdio.h>
// int main(void) {
//     char str[50] = "Hello, World!";
//     ft_memset(str, 65, 5);
//     printf("%s\n", str); // Expected output: "***** World!"
//     return (0);
// }
// -----------

// /////
// #include <stdio.h>
