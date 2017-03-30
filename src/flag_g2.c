/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_g2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 11:41:27 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/28 11:44:08 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char		*spec_betdot_removedot(char *res)
{
	int		i;

	i = 0;
	while (res && res[i])
		i++;
	if (!res[i])
		i--;
	if (res[i] == '.')
		res[i] = '\0';
	return (res);
}

static char	*spec_betdot_width2(char *sav, char *res)
{
	char	tmp;
	int		i;
	int		len;

	i = 0;
	if (sav && sav[0] && (sav[0] == '-' || sav[0] == '+' || sav[0] == ' '))
	{
		while (res && res[i] && res[i] == ' ')
			i++;
		len = i;
		while (res && res[i] && res[i] != sav[0])
			i++;
		if (res[i] == sav[0])
		{
			tmp = res[len];
			res[len] = sav[0];
			res[i] = tmp;
		}
	}
	ft_strdel(&sav);
	return (res);
}

char		*spec_betdot_width(t_ptf *var, char *res, int len, int i)
{
	char	*add;
	char	*sav;

	sav = ft_strdup(res);
	add = ft_strnew(var->output->width - len);
	while (add && ++i < var->output->width - len)
	{
		add[i] = ' ';
		if (var->output->flag[1])
			add[i] = '0';
	}
	if (var->output->flag[2])
	{
		res = ft_concat(res, add);
		ft_strdel(&add);
	}
	else
	{
		add = ft_concat(add, res);
		ft_strdel(&res);
		res = add;
	}
	spec_betdot_width2(sav, res);
	return (res);
}

char		*spec_betdot_prec(char *res, int precision, int i)
{
	int		i_nb;

	i_nb = 0;
	while (res && res[i] && res[i] != '.')
		i++;
	if (res && res[i] && res[i] == '.')
		i++;
	while (res && res[i] && res[i] == '0')
		i++;
	while (res && res[i] && i_nb < precision)
	{
		if (ft_isdigit(res[i]))
			i_nb++;
		i++;
	}
	if (i_nb == precision)
		while (res && res[i])
		{
			res[i] = '\0';
			i++;
		}
	return (res);
}

char		*spec_betdot_delzero(char *res)
{
	int		i;

	i = 0;
	while (res && res[i])
		i++;
	i--;
	while (res && res[i] && res[i] == '0')
	{
		res[i] = '\0';
		i--;
	}
	return (res);
}
