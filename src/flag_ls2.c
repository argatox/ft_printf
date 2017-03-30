/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_ls2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 16:15:45 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/27 16:15:46 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char		*spec_lstr_empty(char *str, int len, int *flags)
{
	int		i;

	i = 0;
	if (str && str[0])
		ft_strdel(&str);
	str = ft_strnew(len);
	while (i < len)
	{
		if (!flags[1])
			str[i] = ' ';
		else
			str[i] = '0';
		i++;
	}
	ft_putstr(str);
	return (str);
}

static int	spec_lstr_treat(char *str, wchar_t *wstr, int nb)
{
	int		i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == 'c')
		{
			while (wstr && wstr[0])
			{
				nb += ft_printf("%C", wstr[0]);
				wstr++;
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (nb);
}

static int	spec_lstr_treat2(char *str, wchar_t *wstr, int nb, int wlen)
{
	int		i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == 'c')
		{
			while (wstr && wstr[0] && nb < wlen)
			{
				nb += ft_printf("%C", wstr[0]);
				wstr++;
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (nb);
}

static int	spec_lstr_short(t_ptf *var, char **str, wchar_t *wstr, int *flags)
{
	int		wlen;
	char	*bin;
	int		i;
	int		nb;

	nb = 0;
	i = -1;
	wlen = 0;
	while (wlen < var->output->precision)
	{
		bin = ft_intmaxtoa_base(wstr[++i], 2);
		if (wlen + spec_lstr_wlen(bin) > var->output->precision)
			break ;
		wlen += spec_lstr_wlen(bin);
		ft_strdel(&bin);
	}
	ft_strdel(&bin);
	if (!wlen)
		*str = spec_lstr_empty(*str, var->output->width, flags);
	else
	{
		*str = spec_wstr_width(var, *str, ((wlen) ? (wlen) : (0)), flags);
		nb = spec_lstr_treat2(*str, wstr, nb, wlen);
	}
	return (nb);
}

int			spec_lstr_full(t_ptf *var, wchar_t *wstr, char **str, int wlen)
{
	int		nb;
	int		*flags;

	flags = var->output->flag;
	nb = 0;
	if (!wstr[0])
		nb--;
	*str = ft_strdup("c");
	if (var->output->precision > 0 && wlen > var->output->precision)
		nb = spec_lstr_short(var, str, wstr, flags);
	else
	{
		*str = spec_wstr_width(var, *str, wlen, flags);
		nb = spec_lstr_treat(*str, wstr, nb);
	}
	return (nb);
}
