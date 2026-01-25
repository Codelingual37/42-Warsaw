void	ft_swap(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = 10;
	int b = 5;

	printf("%s", "Integer A was: ");
	printf("%d\n", a);
	printf("%s", "Integer B was: ");
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("%s", "Integer A is now: ");
	printf("%d\n", a);
	printf("%s", "Integer B is now: ");
	printf("%d\n", b);
}*/