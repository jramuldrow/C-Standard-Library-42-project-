/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomuldro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 19:00:51 by jomuldro          #+#    #+#             */
/*   Updated: 2019/03/10 13:23:29 by jomuldro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f) (char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
		while (*(s + i))
			f(s + i++);
}