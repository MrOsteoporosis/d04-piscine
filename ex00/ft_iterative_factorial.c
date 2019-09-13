/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 12:43:00 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 12:58:24 by averheij      ########   odam.nl         */
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
	else if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		total = total * nb;
        nb = nb - 1;
	}
    return (total);
}
/*fend */

int     main(void)
{
    int number;
    number = 10;
    printf("%d\n", number);
    printf("%d\n", ft_iterative_factorial(number));
}