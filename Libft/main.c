#include <stdio.h>
#include <string.h>   // for comparison with system strlcpy (if available)
#include "libft.h"

int	main(void)
{
	char	buf[20];
	const char *src = "Hello";

	// Case 1: dstsize = 0 (nothing copied, return = strlen(src))
	printf("Case 1: dstsize = 0\n");
	printf("Return: %zu\n", ft_strlcpy(buf, src, 0));
	printf("Buffer: \"%s\"\n\n", buf);

	// Case 2: dstsize = 1 (only room for '\0')
	printf("Case 2: dstsize = 1\n");
	printf("Return: %zu\n", ft_strlcpy(buf, src, 1));
	printf("Buffer: \"%s\"\n\n", buf);

	// Case 3: dstsize = strlen(src) (truncation)
	printf("Case 3: dstsize = %zu\n", strlen(src));
	printf("Return: %zu\n", ft_strlcpy(buf, src, strlen(src)));
	printf("Buffer: \"%s\"\n\n", buf);

	// Case 4: dstsize = strlen(src) + 1 (exact fit)
	printf("Case 4: dstsize = %zu\n", strlen(src) + 1);
	printf("Return: %zu\n", ft_strlcpy(buf, src, strlen(src) + 1));
	printf("Buffer: \"%s\"\n\n", buf);

	// Case 5: dstsize > strlen(src) + 1 (extra room)
	printf("Case 5: dstsize = 20\n");
	printf("Return: %zu\n", ft_strlcpy(buf, src, 20));
	printf("Buffer: \"%s\"\n\n", buf);

	return (0);
}
