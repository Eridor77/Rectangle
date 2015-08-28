/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:19:05 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/08 13:45:15 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	str_size;

	str_size = 0;
	while (str[str_size] != '\0')
		str_size++;
	return (str_size);
}
