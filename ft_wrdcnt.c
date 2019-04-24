/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomuldro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 16:31:33 by jomuldro          #+#    #+#             */
/*   Updated: 2019/03/11 19:00:37 by jomuldro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wrdcnt(const char *s, char c)
{
	unsigned int	i;
	int				wrd;

	i = 0;
	wrd = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			wrd++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (wrd);
}
