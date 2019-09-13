/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 12:43:00 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 14:16:51 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>

/*fstart */
int		ft_iterative_factorial(int nb)
{
	int total;

	total = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		total = total * nb;
		nb = nb - 1;
	}
	return (total);
}
/*fend */

int		main(void)
{
	int number;

	number = 1234567890;
	printf("%d\n", number);
	printf("%d\n", ft_iterative_factorial(number));
}
