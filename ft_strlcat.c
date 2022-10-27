/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:08:40 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/22 23:33:29 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	len_dst;
	unsigned int	len_src;
	unsigned int	j;

	if (!dst && dstsize == 0)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	if (dstsize <= len_dst)
		len_src = len_src + dstsize;
	else
		len_src = len_src + len_dst;
	j = 0;
	while (src[j] != '\0' && len_dst < dstsize - 1)
	{
		dst[len_dst] = src[j];
		len_dst++;
		j++;
	}
	if (len_dst <= (dstsize - 1))
		dst[len_dst] = '\0';
	return (len_src);
}
