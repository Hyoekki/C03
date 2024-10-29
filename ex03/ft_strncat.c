/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:00:16 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/14 11:31:54 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p;

	p = dest;
	if (nb < 1)
		return (dest);
	while (*p)
		p++;
	while (nb-- && *src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
