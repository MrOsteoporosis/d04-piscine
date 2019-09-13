/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 13:06:49 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 14:17:14 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */

#include <stdio.h>

/*fstart */
int		ft_iterative_power(int nb, int power)
{
	int total;

	if (power < 0)
	{
		return (0);
	}
	total = 1;
	while (power > 0)
	{
		total = total * nb;
		power = power - 1;
	}
	return (total);
}
/*fend */

int		main(void)
{
	int number;
	int power;

	number = 4;
	power = 2;
	printf("%d\n", number);
	printf("%d\n", power);
	printf("%d\n", ft_iterative_power(number, power));
}
