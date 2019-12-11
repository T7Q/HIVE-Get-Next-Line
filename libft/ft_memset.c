/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuumola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:21:43 by tkuumola          #+#    #+#             */
/*   Updated: 2019/10/21 11:22:00 by tkuumola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	char *p;

	p = (char *)dest;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (dest);
}