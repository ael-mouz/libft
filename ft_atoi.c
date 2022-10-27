/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:06:11 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/27 18:41:35 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	tooolong(int sign, size_t number)
{
	if (number >= 9223372036854775807)
		if (sign == 1)
			return (-1);
	if (number > 9223372036854775807)
		if (sign == -1)
			return (0);
	return ((int)(number * sign));
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	size_t	number;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (tooolong(sign, number));
}
// int main()
// {
// 	printf(ft_atoi("%d", "9223372036854775807"));
// 	printf(ft_atoi("%d", "9223372036854775807"));
// }