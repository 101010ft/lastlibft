/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:12:43 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:36:17 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, bir karakteri büyük harfe dönüştürür.
** 'c' parametresi, dönüştürülecek karakterin ASCII değerini temsil eder.
** Eğer 'c' parametresi küçük harf ise, büyük harf olarak döndürülür.
** Aksi halde, 'c' değeri olduğu gibi döndürülür.
*/

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (c - 32);
	}
	return (c);
}
