/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 13:13:17 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 13:17:49 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */

#include <stdio.h>

/*fstart */
int	 ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (nb);
	}
}
/*fend */

int	 main(void)
{
	int number;
	int power;
	number = 12;
	power = 4;
	printf("%d\n", number);
	printf("%d\n", power);
	printf("%d\n", ft_recursive_power(number, power));
}