/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:13:48 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:36:31 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, bir karakteri küçük harfe dönüştürür.
** 'c' parametresi, dönüştürülecek karakterin ASCII değerini temsil eder.
** Eğer 'c' parametresi büyük harf ise, küçük harf olarak döndürülür.
** Aksi halde, 'c' değeri olduğu gibi döndürülür.
*/

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (c + 32);
	}
	return (c);
}
