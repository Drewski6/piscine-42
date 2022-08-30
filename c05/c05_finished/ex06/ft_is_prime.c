/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:35:09 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/24 11:45:35 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i <= nb && i < 50000)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	largest_sqrt;
	int	i;

	i = 3;
	largest_sqrt = 0;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	largest_sqrt = ft_sqrt(nb);
	while (i < largest_sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
