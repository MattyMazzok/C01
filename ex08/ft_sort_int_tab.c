/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 03:09:15 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/09 03:12:36 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		tmp;
	int		maxindex;
	int		tmp2;
	int		minore;
	int		index;

	tmp = 0;
	maxindex = size - 1;
	while (tmp <= maxindex)
	{
		tmp2 = tmp;
		minore = tab[tmp];
		while (tmp2 <= maxindex)
		{
			if (tab[tmp2] <= minore)
			{
				minore = tab[tmp2];
				index = tmp2;
			}
			tmp2++;
		}
		ft_swap(&tab[tmp], &tab[index]);
		tmp++;
	}
}
