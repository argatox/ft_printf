/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_o_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:14:18 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/15 16:14:19 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static char	*spec_oct_precision(char *str, int precision, int i)
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

static char	*spec_oct_width_2(char *str, int *flags, int len, char *res)
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

static char	*spec_oct_width(t_ptf *var, char *str, int *flags)
{
	int		width;
	char	*res;
	int		len;
	int		i;

	i = -1;
	len = ft_strlen(str);
	width = var->output->width;
	if (width > len)
	{
		res = ft_strnew(width - len);
		if (flags[1] && (var->output->precision < 0 || (var->output->precision \
										> -1 && var->output->precision > len)))
		{
			while (++i < (width - len))
				res[i] = '0';
			res = ft_concat(res, str);
			ft_strdel(&str);
			str = res;
		}
		else
			str = spec_oct_width_2(str, flags, (width - len), res);
	}
	return (str);
}

char		*spec_oct_prefix(char *str, int *flags)
{
	char	*pre;

	if (flags[0] && str && str[0] != '0')
	{
		pre = ft_strdup("0");
		pre = ft_concat(pre, str);
		ft_strdel(&str);
		str = pre;
	}
	return (str);
}

char		*recup_spec_oct(t_ptf *var, char *str)
{
	int				*flags;
	int				precision;
	char			*pre;
	int				nb_null;

	nb_null = 0;
	if (str && ft_strlen(str) == 1 && str[0] == '0')
		nb_null = 1;
	pre = NULL;
	flags = var->output->flag;
	precision = ((var->output->precision < 0) ? (0) : (var->output->precision));
	str = spec_oct_prefix(str, flags);
	if (str)
	{
		if (precision != 0)
			str = spec_oct_precision(str, precision, -1);
		if (var->output->precision == 0 && nb_null && !flags[0])
		{
			ft_strdel(&str);
			str = ft_strdup("");
		}
		str = spec_oct_width(var, str, flags);
	}
	return (str);
}
