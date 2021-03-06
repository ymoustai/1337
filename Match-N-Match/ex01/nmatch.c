/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:42:46 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/09 22:24:12 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s1 == *s2)
	{
		if (*s1 != '\0' && *s2 != '\0')
			return (nmatch(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}
