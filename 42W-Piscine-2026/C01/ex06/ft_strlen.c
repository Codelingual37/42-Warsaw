#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Hello";
	int		length;

	length = ft_strlen(str);
	printf("%s%s%s%d%s\n", "The length of string \"", str, "\" is ", length, ".");
}*/