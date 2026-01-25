void	ft_rev_int_tab(int *tab, int size)
{
	int	hold;
	int	front;
	int	back;

	front = 0;
	back = size - 1;
	while (front != back)
	{
		hold = tab[front];
		tab[front] = tab[back];
		tab[back] = hold;
		front++;
		back--; 
	}
}

#include <stdio.h>
int	main(void)
{
	int	tab[6] = {1, 2, 3, 4, 5, 6};

	printf("%s", "The original array is: ");
	while (*tab)
	{
		printf("%d ", *tab);
		tab++;
	}
	ft_rev_int_tab(tab, 6);
	printf("%s%d\n", "The reversed array is: ", *tab);
}