/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 02:56:58 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/09 03:00:51 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		*punt1;
	int		*punt2;

	punt1 = &(tab[0]);
	punt2 = &(tab[size - 1]);
	while (punt1 < punt2)
	{
		ft_swap(punt1, punt2);
		punt1++;
		punt2--;
	}
}
