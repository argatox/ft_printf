/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_flags2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 15:29:49 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/22 15:29:51 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		precision_flags(t_ptf *var, int i, char *all)
{
	i++;
	if (ft_isdigit(all[i]) || (all[i] == '-' && ft_isdigit(all[i + 1])))
	{
		if (all[i] == '-')
		{
			i++;
			while (all[i] && ft_isdigit(all[i]))
				i++;
			var->output->precision = 0;
		}
		else
		{
			var->output->precision = ft_atoi(all + i);
			while (all[i] && ft_isdigit(all[i]))
				i++;
		}
	}
	else if (all[i] == '*')
		i = flags_width_star(var, i, 2);
	else
		var->output->precision = 0;
	return (i);
}
