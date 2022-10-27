/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:42:33 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/27 18:09:30 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr;
	int		glen;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	glen = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * glen + 1);
	if (!ptr)
		return (NULL);
	while (i < glen && s1[++i] != '\0')
		ptr[i] = s1[i];
	while (i < glen && s2[++j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
