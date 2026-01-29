char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src != src[n - 1])
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	*src;
	char	*dest;
	int		bytes;

	src = "Hello";
	bytes = 3;
	dest = (char *)malloc((bytes + 1) * sizeof(char));
	ft_strncpy(dest, src, bytes);
	printf("%s %s\n", "The source string is:", src);
	printf("%s %s\n", "The copied string is now:", dest);
	free(dest);
}