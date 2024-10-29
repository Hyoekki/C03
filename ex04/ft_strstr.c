/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:34:01 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/10 12:12:48 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && (*s == *t))
		{
			s++;
			t++;
		}
		if (!*t)
			return (str);
		str++;
	}
	return (0);
}
