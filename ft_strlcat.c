/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:08:40 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/29 22:14:44 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	len_dst;
	unsigned int	len_src;
	size_t			j;
	size_t			i;

	len_src = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (dstsize + len_src);
	len_dst = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= len_dst)
		return (dstsize + len_src);
	j = 0;
	i = len_dst;
	while (src[j] != '\0' && j < dstsize - len_dst - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_src + len_dst);
}
