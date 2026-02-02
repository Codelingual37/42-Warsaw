int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
//#include <stdio.h>
/*int main(void) {

	char string[] = "111H";
	char* str = string;
	int  result = ft_str_is_numeric(str);
	printf("%d\n", result);
}*/
