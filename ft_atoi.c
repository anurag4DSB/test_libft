/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 10:19:18 by amittal           #+#    #+#             */
/*   Updated: 2017/06/08 20:52:13 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	char	c;
	int		neg_num;
	int		neg;

	while ((c = *str) && ISSPACE(c))
		str++;
	neg = c == '-';
	str += c == '-' || c == '+';
	neg_num = 0;
	while ((c = *str++) && ISDIGIT(c))
		neg_num = neg_num * 10 - c + '0';
	return (neg ? neg_num : -neg_num);
}
