/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:30:37 by sprodan-          #+#    #+#             */
/*   Updated: 2017/12/12 19:03:23 by sprodan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = ft_strlen(s1);
	j = 0;
	while (n > 0 && s2[j])
	{
		s1[i++] = s2[j++];
		n--;
	}
	s1[i] = '\0';
	return (s1);
}