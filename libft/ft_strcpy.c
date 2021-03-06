/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:58:01 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/07 18:24:38 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*dest == *src)
		dest++, src++;
	return (ret);
}
