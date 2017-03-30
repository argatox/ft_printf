/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 14:58:02 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/27 14:58:04 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Fonction qui prend check la chain de caracetere
** pour trouver tout les parametre d'affichage
*/

int			flags_width_star(t_ptf *var, int i, int action)
{
	if (action == 1)
	{
		var->output->width = va_arg(var->args, int);
		if (var->output->width < 0)
		{
			var->output->flag[2] = 1;
			var->output->width *= -1;
		}
	}
	if (action == 2)
		var->output->precision = va_arg(var->args, unsigned int);
	i++;
	return (i);
}

static char	*lenght_flags_sort(t_ptf *var, char *lenght)
{
	char	*res;
	char	*var_lenght;

	res = NULL;
	var_lenght = var->output->lenght;
	if (!var->output->lenght)
		return (lenght);
	else
	{
		if (!ft_strcmp(var->output->lenght, "h") && !ft_strcmp(lenght, "j"))
			res = ft_strdup(lenght);
		else if (!ft_strcmp(var_lenght, "hh") && !ft_strcmp(lenght, "l"))
			res = ft_strdup(lenght);
		else
			res = ft_strdup(var->output->lenght);
	}
	ft_strdel(&var->output->lenght);
	ft_strdel(&lenght);
	return (res);
}

static int	lenght_flags(t_ptf *var, int i, char *all)
{
	char	*lenght;

	lenght = NULL;
	if (all && all[i] && ((all[i] == 'j' || all[i] == 'z')))
	{
		lenght = ft_strsub(all, i, 1);
		i++;
	}
	else if (all && all[i] && (all[i] == 'h' || all[i] == 'l'))
	{
		if (all[i] && all[i + 1] && ((all[i] == 'h' && all[i + 1] == 'h') || \
									(all[i] == 'l' && all[i + 1] == 'l')))
		{
			lenght = ft_strsub(all, i, 2);
			i += 2;
		}
		else
		{
			lenght = ft_strsub(all, i, 1);
			i++;
		}
	}
	var->output->lenght = lenght_flags_sort(var, lenght);
	return (i);
}

static int	width_flags(t_ptf *var, int i, char *all)
{
	var->output->width = ft_atoi(all + i);
	while (all[i] && ft_isdigit(all[i]))
		i++;
	return (i);
}

void		sort_value(t_ptf *var, int i, int j, char *all)
{
	while (all && all[i])
	{
		if ((j = ft_strchri(FLAG, all[i])) < 5)
		{
			var->output->flag[j] = 1;
			i++;
		}
		else if (all[i] == '*')
			i = flags_width_star(var, i, 1);
		else if (ft_isdigit(all[i]))
			i = width_flags(var, i, all);
		else if (all[i] == '.')
			i = precision_flags(var, i, all);
		else if (all[i] == 'j' || all[i] == 'h' || all[i] == 'l' \
											|| all[i] == 'z')
			i = lenght_flags(var, i, all);
		else if ((j = ft_strchri(SPEC, all[i])) < 22)
		{
			var->output->specifier = ft_strsub(all, i, 1);
			break ;
		}
	}
	ft_strdel(&var->output->all);
}
