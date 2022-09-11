/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 02:29:37 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/09 02:34:16 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	quoziente;
	int	resto;

	if (*b != 0)
	{
		quoziente = (*a) / (*b);
		resto = (*a) % (*b);
		*a = quoziente;
		*b = resto;
	}
}
