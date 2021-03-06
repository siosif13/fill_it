/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 17:21:17 by sprodan-          #+#    #+#             */
/*   Updated: 2017/12/20 17:53:45 by sprodan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_maxint(int *ar, int size)
{
	int i;
	int max;

	i = 0;
	max = ar[0];
	while (i < size)
	{
		if (ar[i] > max)
			max = ar[i];
		i++;
	}
	return (max);
}
