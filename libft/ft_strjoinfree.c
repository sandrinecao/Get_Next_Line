/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scao <scao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 11:49:55 by scao              #+#    #+#             */
/*   Updated: 2019/01/11 11:49:59 by scao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoinfree(char const *s1, char const *s2)
{
	char	*new;

	new = NULL;
	if (s1 && s2)
	{
		if (!(new = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		new = ft_strcpy(new, s1);
		new = ft_strcat(new, s2);
		free((char*)s1);
		free((char*)s2);
		return (new);
	}
	return (NULL);
}
