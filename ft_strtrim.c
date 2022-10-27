/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:21:51 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/27 18:14:02 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	if ((size_t)i == ft_strlen(s1))
		return (ft_strdup(""));
	j = ft_strlen(s1);
	while (j >= 0)
	{
		if (!ft_strchr(set, s1[j - 1]))
			break ;
		j--;
	}
	p = ft_substr(s1, i, j - i);
	return (p);
}
