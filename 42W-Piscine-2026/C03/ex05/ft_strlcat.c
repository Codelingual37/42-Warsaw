unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	destlen = 0;
	srclen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (size > destlen)
	{
		while (i < size - destlen - 1 && src[i])
		{
			dest[destlen + i] = src[i];
			i++;
		}
		dest[destlen + i] = '\0';
		return (destlen + srclen);
	}
	else
		return (size + srclen);
}

/*#include <stdio.h>
int main(void)
{
	char	dest[] = "Hello ";
	char	src[] = "World!";
	unsigned int size = 3;
	unsigned int result = ft_strlcat(dest, src, size);
	printf("%u\n", result);
}*/
