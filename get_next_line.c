/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 13:25:45 by csinglet          #+#    #+#             */
/*   Updated: 2018/05/28 00:27:48 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

#include <stdio.h>
#include <stdlib.h>

int					get_next_line(const int fd, char **line)
{
	static char		*file[1024];
	char			buff[BUFF_SIZE + 1];
	int				bytes;


	if ((!file[fd] && !(file[fd] = ft_strnew(1))) || fd < 0)
		return (-1);
	if (!(*line = ft_strnew(1)))
	 	return (-1);
	while ((bytes = read(fd, buff, BUFF_SIZE)))
	{
		buff[bytes] = '\0';
		if (!(file[fd] = ft_strjoin(file[fd], buff)))
			return (-1);
		if (ft_strchr(buff, '\n') != NULL)
			break ;
	}
	if (bytes < BUFF_SIZE && !ft_strlen(file[fd]))
		return (0);
	bytes = ft_copy_until(line, file[fd], '\n');
	if (bytes < (int)ft_strlen(file[fd]))
		file[fd] += bytes + 1;
	else
		ft_strclr(file[fd]);
	return (1);
}
