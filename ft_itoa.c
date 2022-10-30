/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:26:15 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/30 01:07:05 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	len_nmb(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		j;

	j = len_nmb(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	ptr = (char *)malloc(j + 1);
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * -1;
	}
	ptr[j] = '\0';
	while (n > 0)
	{
		ptr[j - 1] = n % 10 + 48;
		n = n / 10;
		j--;
	}
	return (ptr);
}
