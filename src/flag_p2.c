/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_p2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 10:36:18 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/28 10:36:20 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char		*spec_addr_precision(char *str, int precision, int i)
{
	int		len;
	char	*res;

	res = NULL;
	len = ft_strlen(str);
	if (str[0] == '-')
		len--;
	if (precision > len)
	{
		res = ft_strnew(precision - len);
		while (++i < precision - len)
			res[i] = '0';
		res = ft_concat(res, str);
		i = 0;
		if (str[0] == '-')
			while (res[i] && res[i] != '-')
				i++;
		if (str[0] == '-')
			if (res[i] == '-' && (res[i] = '0'))
				res[0] = '-';
		ft_strdel(&str);
		str = res;
	}
	return (str);
}

static char	*spec_addr_width_2(char *str, int *flags, int len, char *res)
{
	int		i;

	i = -1;
	while (++i < len)
		res[i] = ' ';
	if (flags[2])
	{
		str = ft_concat(str, res);
		ft_strdel(&res);
	}
	else
	{
		res = ft_concat(res, str);
		ft_strdel(&str);
		str = res;
	}
	return (str);
}

char		*spec_addr_width(t_ptf *var, char *str, int *flags, int i)
{
	int		width;
	char	*res;
	int		len;

	len = ft_strlen(str);
	width = var->output->width;
	if (width > len)
	{
		res = ft_strnew(width - len);
		if (flags[1] && var->output->precision == -1)
		{
			while (++i < (width - len))
				res[i] = '0';
			res = ft_concat(res, str);
			i = ft_strchri(res, 'x');
			res[i] = '0';
			res[1] = 'x';
			ft_strdel(&str);
			str = res;
		}
		else
			str = spec_addr_width_2(str, flags, (width - len), res);
	}
	return (str);
}
