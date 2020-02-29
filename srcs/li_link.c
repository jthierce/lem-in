/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   li_link.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <bleplat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:41:19 by bleplat           #+#    #+#             */
/*   Updated: 2020/02/29 20:13:21 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "li.h"

/*
** Dump a link to the screen.
*/

void						li_link_dump(t_li_link *link)
{
	t_li_room *ra;
	t_li_room *rb;

	ra = link->p_room_a;
	rb = link->p_room_b;
	if (link->i_room_a != ra->index)
		ft_printf("/!\\{underline}{red} room index %d incorrect\n", ra->index);
	if (link->i_room_b != rb->index)
		ft_printf("/!\\{underline}{red} room index %d incorrect\n", rb->index);
	ft_printf("{orange}link between %s and %s\n", ra->name, rb->name);
}