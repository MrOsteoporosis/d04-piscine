/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/14 11:11:46 by averheij       #+#    #+#                */
/*   Updated: 2019/09/14 11:16:17 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>

/*fstart */
int		ft_is_prime(int nb)
{
	int check;

	check = 2;
	while (check < (nb / 2))
	{
		if ((nb % check) == 0)
		{
			return (0);
		}
		check = check + 1;
	}
	return (1);
}

int		main(void)
{
	int number;

	number = 123;
	printf("%d\n", number);
	printf("%d\n", ft_is_prime(number));
}
