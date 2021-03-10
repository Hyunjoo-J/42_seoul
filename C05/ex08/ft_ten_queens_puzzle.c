#include <unistd.h>

int promising(int *col, int i)
{
	int j;

	j = -1;
	while (++j < i)
	{
			if (col[i] == col[j] || i - j == col[i] -col[j] || i - j == col[j] - col[i])
				return (0);
	}
	return (1);
}

void rec(int *col, int idx, int num)
{
	if (!promising(col, idx))
		return ((num == 9) ? rec(col, idx, 0) : rec(col, idx, num + 1));
	col[idx] = num;
	rec(col, idx + 1, num  + 1)
}

int	ft_ten_queens_puzzle(void)
{
	int col[10];
	int idx;
	int num;

	idx = 0;
	while (idx < 10)
	{
		col[idx++] = -1;
	}
	idx = 0;
	num = 0;
	rec(col, idx, num);

}
