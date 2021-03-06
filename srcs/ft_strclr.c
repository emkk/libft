/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:23:12 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 16:01:59 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Fills a NUL-terminated string with NUL.
*/

void	ft_strclr(char *s)
{
	if (s)
	{
		ft_bzero(s, (sizeof(char) * ft_strlen(s)));
	}
}
