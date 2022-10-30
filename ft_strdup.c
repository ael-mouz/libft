/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:58:26 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/30 01:17:09 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*pt;

	i = 0;
	len = ft_strlen(s1);
	pt = (char *)malloc(sizeof(char) * len + 1);
	if (!pt)
		return (NULL);
	while (i < len)
	{
		pt[i] = s1[i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
