/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwagner <aiwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:17:27 by aiwagner          #+#    #+#             */
/*   Updated: 2022/11/21 14:46:13 by aiwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	while(!str)
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	if (c == '\0')
		return (str + i);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		ptr[j] = s1[j];
		j++;
	}
	while (s2[i])
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	*read_buffer(int fd)
{
	char	*str;
	int	i;

	str = malloc(sizeof(char)*BUFFER_SIZE + 1);
	i = read(fd, str, BUFFER_SIZE);
	if (i == -1)
	{
		free(str);
		return (NULL);		
	}
	str[BUFFER_SIZE] = '\0';
	return (str);
}
