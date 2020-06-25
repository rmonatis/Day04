/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonatis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:09:45 by rmonatis          #+#    #+#             */
/*   Updated: 2020/06/25 11:55:29 by rmonatis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int i = 1;
	int tempi = 1;

	if(nb < 0)
	{
		return(0);
	}
	if(n <= 1)
	{
		return(1);
	}
	while(1 <= nb)
	{
		tempi = tempi * i;
		i++;
	}
	return (tempi);
}
