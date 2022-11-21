/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwagner <aiwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:14:53 by aiwagner          #+#    #+#             */
/*   Updated: 2022/11/21 14:47:22 by aiwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
	static char	*res;

	while()
	res = read_buffer(fd);

	return (res);
}

int	main(void)
{
	int	fd;
	char	*str;
	
	fd = open("text.txt", O_RDONLY); 
	/*str = "";
	while(str)
	{
		str = get_next_line(fd);
		printf("%s", str);
		free(str);
	}
	*/
	str = read_buffer(fd);
	printf("%s\n", str);
	close(fd);
	return (0);
}
