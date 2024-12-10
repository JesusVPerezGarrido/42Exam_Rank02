void sort_int_tab(int *tab, unsigned int size)
{
	int	index;
	int	sorted;
	int	swap;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		index = 0;
		while (index + 1 < size)
		{
			if (tab[index] > tab[index + 1])
			{
				sorted = 0;
				swap = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = swap;
			}
			index++;
		}
	}
}
