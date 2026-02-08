#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		while (*argv[0])
		{
			write(1, argv[0]++, 1);
		}
	}
}
