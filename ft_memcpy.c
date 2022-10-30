/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mouz <ael-mouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:18:27 by ael-mouz          #+#    #+#             */
/*   Updated: 2022/10/29 21:30:21 by ael-mouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*char_src;
	unsigned char	*char_dest;
	size_t			i;

	i = 0;
	char_src = (unsigned char *)src;
	char_dest = (unsigned char *)dest;
	if (char_dest == char_src)
		return (dest);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
