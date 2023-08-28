/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:30:49 by asajid            #+#    #+#             */
/*   Updated: 2023/01/26 11:48:54 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strnstr() function locates the first occurrence
	of the null-terminated string needle in the string haystack,
	where not more than (n) characters are searched.
	Characters that appear after a `\0' character are not searched
	If needle is an empty string, haystack is returned;
	if needle occurs nowhere in haystack, NULL is returned;
	otherwise a pointer to the first character of the
	first occurrence of needle is returned.
	Loop thru both strings resetting the needle to 0 once the condition fails
	(i + j < n) is the condition not to exceed searching more than n once
	the needle is found
*/
#include "libft.h"

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)hay + i);
	while (i < n && hay[i] != '\0')
	{
		j = 0;
		while (i + j < n && hay[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)hay + i);
		i++;
	}
	return (NULL);
}
