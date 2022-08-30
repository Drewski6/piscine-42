/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:49:27 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/24 10:48:17 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i <= nb && i < 50000)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
