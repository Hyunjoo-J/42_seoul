#include <unistd>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a\n", 2);
				retrun (0);
			}
			i++;
		}
		write (1, "\n", 1);
		return (0);
	}
	write (1, "a\n", 2);
	return (0);
}