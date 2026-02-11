#include <unistd.h>

int		ft_strlen(char *str)
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

int		error_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < ft_strlen(base) - 1)
	{
		j = 0;
		while (j < ft_strlen(base))
		{
			if (base[j] == '+' || base[j] == '-')
				return (1);
			else if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (!(*base) || ft_strlen(base) < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (error_check(base) != 1)
	{
		int		radix_no;
		int		digit;

		radix_no = ft_strlen(base);
		while (nbr > 0)
		{
			digit = nbr % radix_no;
			nbr /= radix_no;
			write(1, &base[digit], 1);
		}
	}
}

#include <stdio.h>
int	main(void)
{
	char	*dec = "0123456789";
	char	*hex = "0123456789ABCDEF";
	char	*oct = "poneyvif";
	char	*bin = "01";
	char	*err1 = "";
	char	*err2 = "1";
	char	*err3 = "test";
	char	*err4 = "-base";
	ft_putnbr_base(42, dec);
	printf("\n");
	ft_putnbr_base(42, hex);
	printf("\n");
	ft_putnbr_base(42, oct);
	printf("\n");
	ft_putnbr_base(42, bin);
	printf("\n");
	ft_putnbr_base(42, err1);
	printf("\n");
	ft_putnbr_base(42, err2);
	printf("\n");
	ft_putnbr_base(42, err3);
	printf("\n");
	ft_putnbr_base(42, err4);
}
//STILL NEEDS TO HANDLE NEGATIVE NUMBERS.