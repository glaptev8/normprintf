/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_ftoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:24:51 by cjosue            #+#    #+#             */
/*   Updated: 2019/10/22 12:24:54 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char					ft_ftoa_div(long double d, int pr, char *arr)
{
	int					i;

	i = 0;
	while (i < pr)
	{
		d *= 10.00;
		if ((unsigned long int)d == 0)
			arr[i] = '0';
		else
		{
			arr[i] = (unsigned long int)d + '0';
			d -= (unsigned long int)d;
		}
		i++;
	}
	if (ft_rounding(arr, --i) == 1)
	{
		arr[pr - 1] = '\0';
		return (1);
	}
	arr[pr - 1] = '\0';
	return (0);
}

char					*ft_l_ftoa(long double d, int pr)
{
	char				*num;
	long unsigned int	mod;
	int					i;
	char				*div;

	if (!(num = ft_strnew(0)))
		return (NULL);
	if (d < 0)
	{
		num = ft_strjoin("-", "\0");
		d *= (-1);
	}
	else
		num = ft_strjoin("+", "\0");
	mod = (unsigned long int)d;
	if (pr <= 0)
	{
		if ((unsigned long int)((d - (long double)mod) * 1e1) >= 5)
			return (ft_strjoin_re(num, ft_itoa_lu(++mod)));
	}
	if (!(div = ft_strnew(++pr)))
		return (num);
	if (ft_ftoa_div(d - (unsigned long int) d, pr, div) == 1)
		mod++;
	num = ft_strjoin_re(num, ft_itoa_lu(mod));
	return (ft_strjoin_re(num, div));
}