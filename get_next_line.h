/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 13:25:53 by csinglet          #+#    #+#             */
/*   Updated: 2018/04/29 13:25:54 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# define BUFF_SIZE 1024

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif
