int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while (sqrt * sqrt <= nb && sqrt <= 46340)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		else
			sqrt++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_sqrt(-2));
}*/
