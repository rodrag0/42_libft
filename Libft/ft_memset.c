/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponce-c <rponce-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 22:21:25 by rponce-c          #+#    #+#             */
/*   Updated: 2025/08/16 23:54:25 by rponce-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp = (unsigned char *)b;
		//creating the variable tmp to work with the array wothout chaning the position of b
	//unsigned char to work with it safely since ascii and memory go until 255
	while (len--)
	{
		*tmp = (unsigned char)c;
		tmp++;
	}
	return (b);
	//returning the same data i had been working on just on the untouched og position
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

// int main(void) {
//     char str[50] = "Hello, World!";
//     ft_memset(str, 65, 5);
//     printf("%s\n", str); // Expected output: "***** World!"
//     return (0);
// }
// -----------

// /////
// #include <stdio.h>
