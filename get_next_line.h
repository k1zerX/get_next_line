/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 23:20:28 by kbatz             #+#    #+#             */
/*   Updated: 2018/12/24 19:39:39 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1

# include "libft/libft.h"
# include <libc.h>

typedef struct		s_file
{
	char			*line;
	int				fd;
}					t_file;

int					get_next_line(const int fd, char **line);

#endif
