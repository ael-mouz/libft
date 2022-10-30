/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:09:14 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/29 21:46:16 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*char_src;
	unsigned char	*char_dest;
	size_t			i;

	i = 0;
	char_src = (unsigned char *)src;
	char_dest = (unsigned char *)dst;
	if (char_dest == char_src)
		return (dst);
	if (char_dest > char_src)
		while (len--)
			char_dest[len] = char_src[len];
	else
	{
		while (i < len)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}
