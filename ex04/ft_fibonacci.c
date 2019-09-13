/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 13:23:44 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 13:46:21 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */

#include <stdio.h>

/*fstart */
int	 ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
/*fend */

int	 main(void)
{
	int number;
	number = 8;
	printf("%d\n", number);
	printf("%d\n", ft_fibonacci(number));
}