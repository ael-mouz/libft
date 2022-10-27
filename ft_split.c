/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:56:32 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/27 18:36:13 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(const char *ptr, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (ptr[i] != '\0')
	{
		while (ptr[i] == c && ptr[i] != '\0')
			i++;
		if (ptr[i] != c && ptr[i] != '\0')
			j++;
		while (ptr[i] != c && ptr[i] != '\0')
			i++;
	}
	return (j);
}

static	char	**ft_free_tabl(char **str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		free(str[j]);
		j++;
	}
	free(str);
	return (NULL);
}

static	char	**ft_restt(char **str, const char *ptr, char c)
{
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	while (ptr[i] != '\0')
	{
		l = 0;
		while (ptr[i] == c && ptr[i] != '\0')
			i++;
		while (ptr[i] != c && ptr[i] != '\0')
		{
			i++;
			l++;
		}
		str[j] = ft_substr(ptr, i - l, l);
		if (!str[j])
			return (ft_free_tabl(str));
		j++;
		while (ptr[i] == c && ptr[i] != '\0')
			i++;
	}
	return (str[ft_count(ptr, c)] = NULL, str);
}

char	**ft_split(char const *ptr, char c)
{
	char	**str;
	int		x;

	if (!ptr)
		return (NULL);
	x = ft_count(ptr, c);
	str = malloc(sizeof(char *) * (x + 1));
	if (!str)
		return (NULL);
	if (x == 0)
	{
		str[0] = NULL;
		return (str);
	}
	return (ft_restt(str, ptr, c));
}
