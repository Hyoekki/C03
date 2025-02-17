/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:54:23 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/24 11:05:56 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
