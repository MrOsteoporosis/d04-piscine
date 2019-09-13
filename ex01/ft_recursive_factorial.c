/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 13:00:41 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 13:23:30 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>

/*fstart */
int	 ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb-1));
	}
	else
	{
		return (1);
	}
}
/*fend */

int	 main(void)
{
	int number;
	number = 8;
	printf("%d\n", number);
	printf("%d\n", ft_recursive_factorial(number));
}
